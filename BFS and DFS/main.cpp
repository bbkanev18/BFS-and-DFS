#include "DFS.h"
#include "BFS.h"

int main()
{
	GraphDFS dfs;
	GraphBFS bfs(4);

	bfs.addEdge(0, 1);
	bfs.addEdge(0, 2);
	bfs.addEdge(1, 2);
	bfs.addEdge(2, 0);
	bfs.addEdge(2, 3);
	bfs.addEdge(3, 3);

	dfs.addEdge(0, 1);
	dfs.addEdge(0, 2);
	dfs.addEdge(1, 2);
	dfs.addEdge(2, 0);
	dfs.addEdge(2, 3);
	dfs.addEdge(3, 3);

	std::cout << "DFS: ";
	dfs.DFS(2);

	std::cout << "\nBFS: ";
	bfs.BFS(2);
}
