#include<iostream>
#include<vector>

#include "algorithms.hpp"
#include "functions.hpp"

using namespace std;

void testBFS() {
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

void testDFS() {
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

void testBinarySearch() {
    vector<int> array = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Binary Search: " << binarySearch(array, 5) << "\n";
}

void testQuickSort() {
    vector<int> array = { 10, 7, 8, 9, 1, 5 };

    cout << "Quick Sort: ";
    quickSort(array, 0, array.size() - 1);

    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }

    cout << "\n";
}

void testMergeSort() {
    vector<int> array = { 12, 11, 13, 5, 6, 7 };

    cout << "Merge Sort: ";
    mergeSort(array, 0, array.size() - 1);

    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }

    cout << "\n";
}

void testCountingSort() {
    vector<int> array = { 4, 2, 2, 8, 3, 3, 1 };

    cout << "Counting Sort: ";
    countingSort(array);

    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }

    cout << "\n";
}

