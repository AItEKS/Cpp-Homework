#include "Node.h"

Node::Node(int value) : value(value) {}

int Node::getValue() const {
    return value;
}

void Node::addNeighbour(Node* neighbour) {
    neighbours.insert(neighbour);
}

void Node::removeNeighbour(Node* neighbour) {
    neighbours.erase(neighbour);
}

std::set<Node*>::const_iterator Node::nb_begin() const {
    return neighbours.begin();
}

std::set<Node*>::const_iterator Node::nb_end() const {
    return neighbours.end();
}