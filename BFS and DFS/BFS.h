#pragma once
#include <iostream>
#include <vector>
#include <list>

class GraphBFS
{
    int V;    // No. of vertices

    // Pointer to an array containing adjacency
    // lists
    std::vector<std::list<int>> adj;
public:
    GraphBFS(int V);  // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    // prints BFS traversal from a given source s
    void BFS(int s);
};