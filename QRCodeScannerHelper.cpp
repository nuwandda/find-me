//
// Created by Buğrahan Dönmez on 3.01.2020.
//

#include <opencv2/objdetect.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void displayQRCode(Mat &im, Mat &bbox) {

    int n = bbox.rows;
    for (int i = 0; i < n; i++) {

        line(im, Point2i(bbox.at<float>(i, 0), bbox.at<float>(i, 1)),
             Point2i(bbox.at<float>((i + 1) % n, 0), bbox.at<float>((i + 1) % n, 1)), Scalar(255, 0, 0), 3);
    }
    imshow("Result", im);
}
