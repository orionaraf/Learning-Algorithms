#include<iostream>
#include<vector>

#include "algorithms.hpp"
#include "functions.hpp"

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

void testBinarySearch()
{
    vector<int> array = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Binary Search: " << binarySearch(array, 5) << "\n";
}