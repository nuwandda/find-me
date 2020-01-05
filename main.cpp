#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/stitching.hpp>
#include <GraphWithAdjacency.cpp>
#include <FeatureMatchingHelper.cpp>



using namespace std;
using namespace cv;

vector<Mat> images;
vector<Mat> path;

int main(int argc, char *argv[]) {

    // Read and put corridor images
    vector<Mat> c1_images;
    Mat c1_1 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/c1_1.jpg");
    c1_images.push_back(c1_1);
//    Mat c1_2 = imread(
//            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/c1_2.jpg");
//    c1_images.push_back(c1_2);
    Mat c1_3 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/c1_4.jpg");
    c1_images.push_back(c1_3);

    // Read and put D1 images
    vector<Mat> d1_images;
    Mat d1_1 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/d1_1.jpg");
    d1_images.push_back(d1_1);
    Mat d1_2 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/d1_2.jpg");
    d1_images.push_back(d1_2);
    Mat d1_3 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/d1_3.jpg");
    d1_images.push_back(d1_3);

    vector<Mat> d2_images;
    Mat d2_1 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/d2_1.jpg");
    d2_images.push_back(d2_1);
    Mat d2_2 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/d2_2.jpg");
    d2_images.push_back(d2_2);
    Mat d2_3 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/d2_3.jpg");
    d2_images.push_back(d2_3);

    // Create nodes and assign necessary values
    node node_c1 = node();
    node node_d1 = node();
    node node_d2 = node();

    node_c1.val = 0;
    node_c1.scene = c1_images;

    node_d1.val = 1;
    node_d1.scene = d1_images;

    node_d2.val = 2;
    node_d2.scene = d2_images;

    // Create graph
    vector<node> nodes;
    nodes.push_back(node_c1);
    nodes.push_back(node_d1);
    nodes.push_back(node_d2);
    vector<vector<node>> neighbours = findNeighbours(nodes);
    graphEdge edges[neighbours.size()];
    for (int i = 0; i < neighbours.size(); i++) {
        edges[i] = {neighbours[i][0], neighbours[i][1]};
    }


    bool isFinished = false;
    int startingNode = 0;

    int N = 3;      // Number of vertices in the graph
    // calculate number of edges
    int n = sizeof(edges) / sizeof(edges[0]);

    // construct graph
    GraphWithAdjacency diagraph(edges, n, N);

    // print adjacency list representation of graph
    cout << "Graph adjacency list " << endl << "(start_vertex, end_vertex):" << endl;
    for (int i = 0; i < N; i++) {
        // display adjacent vertices of vertex i
        display_AdjList(diagraph.head[i], i);
    }

    while (!isFinished) {
        cout << whereAmI(startingNode) << endl;
        adjNode newNode;
        newNode = selectPath(diagraph.head[startingNode]);
        startingNode = newNode.val;
        cout << newNode.val << endl;
        cout << whereAmI(newNode.val) << endl;
        showAround(newNode);

        isFinished = visitIsDone();
    }

    return 0;
}
