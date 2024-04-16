#include "Node.h"

Node::Node(const std::string& name) : name(name) {}

const std::string& Node::getName() const {
    return name;
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