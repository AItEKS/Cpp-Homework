#pragma once

#include <set>

class Node {
private:
    int value;
    std::set<Node*> neighbours;

public:
    Node(int value);
    int getValue() const;
    void addNeighbour(Node* neighbour);
    void removeNeighbour(Node* neighbour);
    std::set<Node*>::const_iterator nb_begin() const;
    std::set<Node*>::const_iterator nb_end() const;
};
