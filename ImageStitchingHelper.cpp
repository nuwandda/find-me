//
// Created by Buğrahan Dönmez on 25.12.2019.
//

//#include "ImageStitchingHelper.h"

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/stitching.hpp>

using namespace std;
using namespace cv;

// Mode for stitching as panorama
Stitcher::Mode mode = Stitcher::PANORAMA;

void basicImageStitching(const vector<Mat>& imgs) {

    Mat resultingImage;

    Ptr<Stitcher> stitcher = Stitcher::create(mode, false);
    Stitcher::Status status = stitcher->stitch(imgs, resultingImage);

    if (status != Stitcher::OK) {

        cout <<"Can't stitch images\n";
//        return false;
    }

    imwrite("result.jpg", resultingImage);

    imshow("Result", resultingImage);
    waitKey(0);

//    return true;
}

void depthFromStereoImages(const vector<Mat>& imgs) {

    Mat resultingImage;
    Mat imgL;
    Mat imgR;

    cvtColor(imgs[0], imgL, COLOR_BGR2GRAY);
    cvtColor(imgs[1], imgR, COLOR_BGR2GRAY);

    Ptr<StereoBM> stereo = StereoBM::create(16, 15);
    stereo->compute(imgL, imgR, resultingImage);

    // imwrite("disparity", resultingImage);
    imshow("Disparity", resultingImage);
    waitKey(0);
}

void mainSample(vector<Mat> images) {

    // Please change image paths
    Mat image1 = imread("/Users/nuwanda/CLionProjects/ImageStitching/a17.jpg");
    Mat image2 = imread("/Users/nuwanda/CLionProjects/ImageStitching/a18.jpg");
    // Mat image3 = imread("/Users/nuwanda/CLionProjects/ImageStitching/IMG_1788-2.jpg");

    images.push_back(image1);
    images.push_back(image2);
//    images.push_back(image3);

//    for (int i = 1; i < argc; ++i) {
//
//        Mat image = imread(argv[i]);
//        if (image.empty()) {
//
//            cout << "Can't read image '" << argv[i] << "'\n";
//            return -1;
//        }
//        images.push_back(image);
//    }

    basicImageStitching(images);
// depthFromStereoImages(images);
}
