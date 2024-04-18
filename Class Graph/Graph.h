#pragma once

#include <set>
#include "Node.h"

class Graph {
private:
    std::set<Node*> nodes;

public:
    Graph();
    void addNode(Node* node);
    void removeNode(Node* node);
    void addEdge(Node* begin, Node* end);
    void removeEdge(Node* begin, Node* end);
    std::set<Node*>::const_iterator begin() const;
    std::set<Node*>::const_iterator end() const;
    const Node* binarySearch(const std::string& name) const;
};
