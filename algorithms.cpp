#include<iostream>
#include<vector>
#include<queue>
#include<stack>

#include "algorithms.hpp"

using namespace std;

void breadthFirstSearch(int start, vector<vector<int>>& graph) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbour : graph[node]) {
            if (!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }

    cout << "\n";
}

void depthFirstSearch(int start, vector<vector<int>>& graph) {
    vector<bool> visited(graph.size(), false);
    stack<int> s;

    s.push(start);
    visited[start] = true;

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        cout << node << " ";

        for (int neighbour : graph[node]) {
            if (!visited[neighbour]) {
                s.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }


    cout << "\n";
}

int binarySearch(vector<int>& array, int target) {
    int left = 0;
    int right = array.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (array[middle] == target) {
            return middle;
        } else if (array[middle] < target) {
            left = middle + 1;
        } else if (array[middle] > target) {
            right = middle - 1;
        }
    }

    // If the target is not found
    return -1;
}

int partition(vector<int>& array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (array[j] < pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }

    swap(array[i + 1], array[high]);

    return i + 1;
}

void quickSort(vector<int>& array, int low, int high) {
    if (low < high) {
        int pivot = partition(array, low, high);

        quickSort(array, low, pivot - 1);
        quickSort(array, pivot + 1, high);
    }
}