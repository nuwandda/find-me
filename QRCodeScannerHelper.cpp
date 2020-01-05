//
// Created by Buğrahan Dönmez on 3.01.2020.
//

#include <opencv2/objdetect.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

const double MIN_AREA = 2500;

using namespace cv;
using namespace std;

double angle(const Point &pt1, const Point &pt2, const Point &pt0) {

    double dx1 = pt1.x - pt0.x;
    double dy1 = pt1.y - pt0.y;
    double dx2 = pt2.x - pt0.x;
    double dy2 = pt2.y - pt0.y;
    return (dx1 * dx2 + dy1 * dy2) / sqrt((dx1 * dx1 + dy1 * dy1) * (dx2 * dx2 + dy2 * dy2) + 1e-10);
}

double calculateAreaOfPolygon(vector<Point> points) {

    double area = 0.0;

    for (int i = 0; i < 4; ++i) {
        int j = (i + 1) % 4;
        area += 0.5 * (points[i].x * points[j].y - points[j].x * points[i].y);
    }

    return (abs(area));
}

void cropQRCode(vector<Point> points, Mat &cropped, const Mat &image) {

    int sum = 0;
    Point point;
    for (int i = 0; i < points.size(); i++) {
        if (i == 0) {
            sum = (points[i].x + points[i].y);
            point = points[i];
        }

        if ((points[i].x + points[i].y) < sum) {
            sum = (points[i].x + points[i].y);
            point = points[i];
        }
    }
    Rect roi(point.x, point.y, abs(points[2].x - points[0].x), abs(points[2].y - points[0].y));
    cropped = image(roi);
}

void displayQRCode(Mat &im, Mat &bbox) {

    int n = bbox.rows;
    for (int i = 0; i < n; i++) {

        line(im, Point2i(bbox.at<float>(i, 0), bbox.at<float>(i, 1)),
             Point2i(bbox.at<float>((i + 1) % n, 0), bbox.at<float>((i + 1) % n, 1)), Scalar(255, 0, 0), 3);
    }
//    imshow("Result", im);
}

bool detectQRCode(Mat &image, string &data_string) {

    QRCodeDetector qrDecoder = QRCodeDetector();

    Mat bbox, rectified_image;
    string data = qrDecoder.detectAndDecode(image, bbox, rectified_image);

    if (data.length() > 0) {
        cout << "Decoded Data : " << data << endl;
        data_string = data;

        displayQRCode(image, bbox);
        rectified_image.convertTo(rectified_image, CV_8UC3);
//        imshow("Rectified QRCode", rectified_image);
//
//        waitKey(0);
        return true;
    } else {
        cout << "QR Code not detected" << endl;
        return false;
    }
}

void detectPaper(Mat &image, vector<vector<Point> > &squares, vector<Point> &biggest_area) {

    // blur will enhance edge detection
    Mat blurred(image);
    medianBlur(image, blurred, 9);

    Mat gray0(blurred.size(), CV_8U), gray;
    vector<vector<Point> > contours;

    // find squares in every color plane of the image
    for (int c = 0; c < 3; c++) {
        int ch[] = {c, 0};
        mixChannels(&blurred, 1, &gray0, 1, ch, 1);

        // try several threshold levels
        const int threshold_level = 2;
        for (int l = 0; l < threshold_level; l++) {
            // Use Canny instead of zero threshold level!
            // Canny helps to catch squares with gradient shading
            if (l == 0) {
                Canny(gray0, gray, 10, 20, 3); //

                // Dilate helps to remove potential holes between edge segments
                dilate(gray, gray, Mat(), Point(-1, -1));
            } else {
                gray = gray0 >= (l + 1) * 255 / threshold_level;
            }

            // Find contours and store them in a list
            findContours(gray, contours, CV_RETR_LIST, CV_CHAIN_APPROX_SIMPLE);

            // Test contours
            vector<Point> approx;
            for (const auto &contour : contours) {
                // approximate contour with accuracy proportional
                // to the contour perimeter
                approxPolyDP(Mat(contour), approx, arcLength(Mat(contour), true) * 0.02, true);

                // Note: absolute value of an area is used because
                // area may be positive or negative - in accordance with the
                // contour orientation
                if (approx.size() == 4 &&
                    fabs(contourArea(Mat(approx))) > 1000 &&
                    isContourConvex(Mat(approx))) {
                    double maxCosine = 0;

                    for (int j = 2; j < 5; j++) {
                        double cosine = fabs(angle(approx[j % 4], approx[j - 2], approx[j - 1]));
                        maxCosine = MAX(maxCosine, cosine);
                    }

                    if (maxCosine < 0.3)
                        squares.push_back(approx);
                }
            }
        }
    }

    double area = 0;
    for (const auto &square : squares) {

        double temp_area = calculateAreaOfPolygon(square);
        if (temp_area > area) {
            area = temp_area;
            biggest_area = square;
        }
    }
}