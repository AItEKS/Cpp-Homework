#pragma once

#include "Graph.h"
#include <set>
#include <queue>

class BFS {
public:
    BFS(const Graph& graph, const Node* startNode);
    bool connected(const Node* endNode) const;
private:
    const Graph& graph;
    const Node* startNode;
};