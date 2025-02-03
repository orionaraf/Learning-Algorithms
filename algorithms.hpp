#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <vector>

using namespace std;

void breadthFirstSearch(int start, vector<vector<int>>& graph);
void depthFirstSearch(int start, vector<vector<int>>& graph);
int binarySearch(vector<int>& array, int target);
void quickSort(vector<int>& array, int low, int high);
void mergeSort(vector<int>& array, int left, int right);

#endif 
