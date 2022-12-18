#include "BFS.h"

GraphBFS::GraphBFS(int V)
{
    this->V = V;
    adj.resize(V);
}

void GraphBFS::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void GraphBFS::BFS(int s)
{
    // Mark all the vertices as not visited
    std::vector<bool> visited;
    visited.resize(V, false);

    // Create a queue for BFS
    std::list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    while (!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        std::cout << s << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (auto adjecent : adj[s])
        {
            if (!visited[adjecent])
            {
                visited[adjecent] = true;
                queue.push_back(adjecent);
            }
        }
    }
}