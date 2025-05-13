//
//  main.cpp
//  assignment10
//
//  Created by natalie vidarte on 5/11/25.
//
#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Graph {
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v); // Assuming undirected graph
    }

    void breadthFirstTraversal(int start) {
        vector<bool> visited(V, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout << "Breadth First Traversal starting from vertex " << start << ": ";

        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";

            for (int neighbor : adj[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }

    void depthFirstTraversal(int start) {
        vector<bool> visited(V, false);
        stack<int> s;

        visited[start] = true;
        s.push(start);

        cout << "Depth First Traversal starting from vertex " << start << ": ";

        while (!s.empty()) {
            int current = s.top();
            cout << current << " ";

            bool foundUnvisited = false;

            for (int neighbor : adj[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    s.push(neighbor);
                    foundUnvisited = true;
                    break; // Only push one unvisited adjacent vertex
                }
            }

            if (!foundUnvisited) {
                s.pop();
            }
        }
        cout << endl;
    }
};

// Example usage
int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    g.breadthFirstTraversal(0);
    g.depthFirstTraversal(0);

    return 0;
}
