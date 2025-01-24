#include<iostream>
#include<vector>

#include "algorithms.h"
#include "functions.h"

using namespace std;

void testBFS()
{
    vector<vector<int>> graph = {
        {1, 2},
        {0, 3, 4},
        {0, 5},
        {1},
        {1, 5},
        {2, 4}
    };

    cout << "Breadth First Search: ";
    breadthFirstSearch(0, graph);
}

void testDFS()
{
    vector<vector<int>> graph = {
        {1, 2},
        {0, 3, 4},
        {0, 5},
        {1},
        {1, 5},
        {2, 4}
    };

    cout << "Depth First Search: ";
    depthFirstSearch(0, graph);
}