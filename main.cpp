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
    featureMatching(images);

    return 0;
}
