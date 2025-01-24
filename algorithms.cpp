#include<iostream>
#include<vector>
#include<queue>
#include<stack>

#include "algorithms.h"

using namespace std;

void breadthFirstSearch(int start, vector<vector<int>>& graph)
{
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

void depthFirstSearch(int start, vector<vector<int>>& graph)
{
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
