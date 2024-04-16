#pragma once

#include "Graph.h"
#include <set>
#include <vector>

class DFS {
public:
    DFS(const Graph& graph);
    bool connected(const Node* begin, const Node* end) const;
private:
    const Graph& graph;
};