#include "DFS.h"
void GraphDFS::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void GraphDFS::DFS(int v)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    std::cout << v << " ";

    // Recur for all the vertices adjacent
    // to this vertex
    std::list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}