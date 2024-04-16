#include "Graph.h"

Graph::Graph() {}

void Graph::addNode(Node* node) {
    nodes.insert(node);
}

void Graph::removeNode(Node* node) {
    nodes.erase(node);
    for (auto it = nodes.begin(); it != nodes.end(); it++) {
        (*it)->removeNeighbour(node);
    }
}

void Graph::addEdge(Node* begin, Node* end) {
    if (nodes.find(begin) == nodes.end() || nodes.find(end) == nodes.end())
        return;
    begin->addNeighbour(end);
    end->addNeighbour(begin);
}

void Graph::removeEdge(Node* begin, Node* end) {
    if (nodes.find(begin) == nodes.end() || nodes.find(end) == nodes.end())
        return;
    begin->removeNeighbour(end);
    end->removeNeighbour(begin);
}

std::set<Node*>::const_iterator Graph::begin() const {
    return nodes.begin();
}

std::set<Node*>::const_iterator Graph::end() const {
    return nodes.end();
}