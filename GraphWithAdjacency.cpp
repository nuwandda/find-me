//
// Created by Buğrahan Dönmez on 24.12.2019.
//
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/stitching.hpp>
#include <ImageStitchingHelper.cpp>

const int D1 = 0;
const int D2 = 2;
const int D3 = 3;
const int D4 = 4;

using namespace std;
using namespace cv;

// stores adjacency list items
struct adjNode {
    int val;
    adjNode *next;
};

struct node {
    int val;
    vector<Mat> scene;
};

// structure to store edges
struct graphEdge {
//    int start_ver, end_ver;
    node start_node, end_node;
};

class GraphWithAdjacency {

    // insert new nodes into adjacency list from given graph
    adjNode *getAdjListNode(int value, adjNode *head) {
        adjNode *newNode = new adjNode;
        newNode->val = value;

        newNode->next = head;   // point new node to current head
        return newNode;
    }

    int N;  // number of nodes in the graph

public:

    adjNode **head;                //adjacency list as array of pointers

    // Constructor
    GraphWithAdjacency(graphEdge edges[], int n, int N) {
        // allocate new node
        head = new adjNode *[N]();
        this->N = N;
        // initialize head pointer for all vertices
        for (int i = 0; i < N; ++i)
            head[i] = nullptr;
        // construct directed graph by adding edges to it
        for (unsigned i = 0; i < n; i++) {
            int start_ver = edges[i].start_node.val;
            int end_ver = edges[i].end_node.val;
            // insert in the beginning
            adjNode *newNode = getAdjListNode(end_ver, head[start_ver]);

            // point head pointer to new node
            head[start_ver] = newNode;
        }
    }

    // Destructor
    ~GraphWithAdjacency() {
        for (int i = 0; i < N; i++)
            delete[] head[i];
        delete[] head;
    }
};

// print all adjacent vertices of given vertex
void display_AdjList(adjNode *ptr, int i) {

    while (ptr != nullptr) {
        cout << "(" << i << ", " << ptr->val << ") " << endl;
        ptr = ptr->next;
    }
}

// To show possible paths to the user and select new node
adjNode selectPath(adjNode *point) {
    vector<adjNode> possibleNodes;
    adjNode temp;

    while (point != nullptr) {
        cout << "Possible paths: " << point->val << endl;
        temp = *point;
        possibleNodes.push_back(temp);
        point = point->next;
    }

    //:TODO Add error check
    cout << "Please choose from possible paths: ";
    int targetNode;
    cin >> targetNode;

    adjNode newNode = adjNode();
    for (auto &possibleNode : possibleNodes) {
        if (possibleNode.val == targetNode) {
            return possibleNode;
        }
        newNode = possibleNode;
    }
    return newNode;
}

void showAround(const adjNode& point) {

//    vector<Mat> images = point.current_location;
//    basicImageStitching(images);
}

String whereAmI(int val) {

    if (val == D1) {
        return "You are at D1";
    }
    else if (val == D2) {
        return "You are at D2";
    }
    else if (val == D3) {
        return "You are at D3";
    }
    else if (val == D4) {
        return "You are at D4";
    }
    else {
        return "You are at corridor";
    }
}

bool visitIsDone() {

    bool isFinished;
    int decision;
    cout << "Please type 0 if you find the desired place or type 1 to continue: ";
    cin >> decision;

    isFinished = decision == 0;

    return isFinished;
}

