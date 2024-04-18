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

Node* Graph::binarySearch(const std::string& name) const {
    int left = 0;
    int right = nodes.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        std::set<Node*>::const_iterator it = nodes.begin();
        std::advance(it, mid);
        const Node* midNode = *it;
        if (midNode->getName() == name) {
            return const_cast<Node*>(midNode);
        }
        else if (midNode->getName() < name) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return nullptr;
}
