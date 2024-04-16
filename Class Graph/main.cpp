#include "Graph.h"
#include "BFS.h"
#include "DFS.h"
#include <iostream>

int main() {
    Node* nodeA = new Node("A");
    Node* nodeB = new Node("B");
    Node* nodeC = new Node("C");
    Node* nodeD = new Node("D");
    Node* nodeE = new Node("E");

    Graph graph;
    graph.addNode(nodeA);
    graph.addNode(nodeB);
    graph.addNode(nodeC);
    graph.addNode(nodeD);
    graph.addNode(nodeE);

    graph.addEdge(nodeA, nodeB);
    graph.addEdge(nodeB, nodeC);
    graph.addEdge(nodeC, nodeD);

    BFS bfs(graph, nodeA);
    std::cout << "BFS: A to D connected? " << (bfs.connected(nodeD) ? "Yes" : "No") << std::endl;
    std::cout << "BFS: A to E connected? " << (bfs.connected(nodeE) ? "Yes" : "No") << std::endl;

    DFS dfs(graph);
    std::cout << "DFS: A to D connected? " << (dfs.connected(nodeA, nodeD) ? "Yes" : "No") << std::endl;
    std::cout << "DFS: A to E connected? " << (dfs.connected(nodeA, nodeE) ? "Yes" : "No") << std::endl;

    delete nodeA;
    delete nodeB;
    delete nodeC;
    delete nodeD;
    delete nodeE;

    return 0;
}
