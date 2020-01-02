//
// Created by Buğrahan Dönmez on 1.01.2020.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/stitching.hpp>
#include "opencv2/video/tracking.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/features2D.hpp"

using namespace std;
using namespace cv;


Mat greenFilter(const Mat& src) {

    Mat greenOnly;
    Mat greenOnlyOut;
    cvtColor(src, greenOnly, COLOR_BGR2HSV);
    inRange(greenOnly, Scalar(29, 86, 6), Scalar(64, 255, 255), greenOnlyOut);

    return greenOnlyOut;
}

void featureMatching(vector<Mat> images) {

    // Please change image paths
    Mat image1 = imread("/Users/nuwanda/CLionProjects/ImageStitching/a21.jpg");
    Mat image2 = imread("/Users/nuwanda/CLionProjects/ImageStitching/a22.jpg");

    Mat newImage1 = greenFilter(image1);
    Mat newImage2 = greenFilter(image2);

    images.push_back(image1);
    images.push_back(image2);

    vector<KeyPoint> keypoints_1, keypoints_2;
    Mat descriptor_1, descriptor_2;

    Ptr<FeatureDetector> detector = ORB::create();
    Ptr<DescriptorExtractor> descriptor = ORB::create();

    Ptr<DescriptorMatcher> matcher = DescriptorMatcher::create("BruteForce-Hamming");

    detector->detect(images[0], keypoints_1);
    detector->detect(images[1], keypoints_2);

    descriptor->compute(images[0], keypoints_1, descriptor_1);
    descriptor->compute(images[1], keypoints_2, descriptor_2);

    Mat result;
    drawKeypoints(images[0], keypoints_1, result, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
//    imshow("ORB", result);

    vector<DMatch> matches;
    //BFMatcher matcher ( NORM_HAMMING );
    matcher->match ( descriptor_1, descriptor_2, matches );

    double min_dist=10000, max_dist=0;

    for ( int i = 0; i < descriptor_1.rows; i++ )
    {
        double dist = matches[i].distance;
        if ( dist < min_dist ) min_dist = dist;
        if ( dist > max_dist ) max_dist = dist;
    }

    printf ( "-- Max dist : %f \n", max_dist );
    printf ( "-- Min dist : %f \n", min_dist );

    std::vector< DMatch > good_matches;
    for ( int i = 0; i < descriptor_1.rows; i++ )
    {
        if ( matches[i].distance <= max ( 2*min_dist, 30.0 ) )
        {
            good_matches.push_back ( matches[i] );
        }
    }

    Mat img_match;
    Mat img_goodmatch;
    drawMatches ( images[0], keypoints_1, images[1], keypoints_2, matches, img_match );
    drawMatches ( images[0], keypoints_1, images[1], keypoints_2, good_matches, img_goodmatch );
//    imshow ( "Matches", img_match );
    imshow ( "Good Matches", img_goodmatch );
    waitKey(0);

}
