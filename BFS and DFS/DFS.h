#pragma once
#include <iostream>
#include <list>
#include <map>

class GraphDFS {
public:
    std::map<int, bool> visited;
    std::map<int, std::list<int> > adj;

    // function to add an edge to graph
    void addEdge(int v, int w);

    // DFS traversal of the vertices
    // reachable from v
    void DFS(int v);
};
