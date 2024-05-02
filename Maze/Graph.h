#pragma once

#include <set>
#include <vector>

class Node;

class Graph {
private:
    std::set<Node*> nodes;

public:
    Graph();
    Graph(const std::vector<std::vector<int>>& grid);
    ~Graph();
    void addNode(Node* node);
    void removeNode(Node* node);
    void addEdge(Node* begin, Node* end);
    void removeEdge(Node* begin, Node* end);
    std::set<Node*>::const_iterator begin() const;
    std::set<Node*>::const_iterator end() const;
};