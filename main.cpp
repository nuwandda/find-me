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
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/c1.jpg");
    c1_images.push_back(c1_1);
    Mat c1_2 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/c2.jpg");
    c1_images.push_back(c1_2);
    Mat c1_3 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/c3.jpg");
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
    Mat d1_4 = imread(
            "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/d1_4.jpg");
    d1_images.push_back(d1_4);

    // Create nodes and assign necessary values
    node node_c1 = node();
    node node_d1 = node();

    node_c1.val = 0;
    node_c1.scene = c1_images;

    node_d1.val = 1;
    node_d1.scene = d1_images;

    // Create graph
    vector<node> nodes;
    nodes.push_back(node_c1);
    nodes.push_back(node_d1);
    vector<vector<node>> neighbours = findNeighbours(nodes);

//    bool isFinished = false;
//    int startingNode = 1;
//
//    node node0 = node();
//    node node1 = node();
//    node node2 = node();
//    node node3 = node();
//    node node4 = node();
//
//    node0.val = 0;
//    node1.val = 1;
//    node2.val = 2;
//    node3.val = 3;
//    node4.val = 4;
//
//    // graph edges array.
//    graphEdge edges[] = {
//            // (x, y, w) -> edge from x to y with path
//            {node0, node1},
//            {node1, node0},
//            {node1, node2},
//            {node1, node3},
//            {node1, node4},
//            {node2, node1},
//            {node3, node1},
//            {node4, node1},
//    };
//    int N = 5;      // Number of vertices in the graph
//    // calculate number of edges
//    int n = sizeof(edges) / sizeof(edges[0]);
//
//    // construct graph
//    GraphWithAdjacency diagraph(edges, n, N);
//
//    // print adjacency list representation of graph
//    cout << "Graph adjacency list " << endl << "(start_vertex, end_vertex):" << endl;
//    for (int i = 0; i < N; i++) {
//        // display adjacent vertices of vertex i
//        display_AdjList(diagraph.head[i], i);
//    }
//
//    while (!isFinished) {
//        cout << whereAmI(startingNode) << endl;
//        adjNode newNode;
//        newNode = selectPath(diagraph.head[startingNode]);
//        startingNode = newNode.val;
//        cout << newNode.val << endl;
//        cout << whereAmI(newNode.val) << endl;
//
//        isFinished = visitIsDone();
//    }

//    mainSample(images);
//    featureMatching(images);


    return 0;
}
