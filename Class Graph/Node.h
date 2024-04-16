#pragma once

#include <string>
#include <set>

class Graph;

class Node {
private:
    std::string name;
    std::set<Node*> neighbours;

public:
    Node(const std::string& name);
    const std::string& getName() const;
    void addNeighbour(Node* neighbour);
    void removeNeighbour(Node* neighbour);
    std::set<Node*>::const_iterator nb_begin() const;
    std::set<Node*>::const_iterator nb_end() const;
    friend class Graph;
};