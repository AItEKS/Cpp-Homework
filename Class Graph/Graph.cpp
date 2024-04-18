#include <iostream>
#include <fstream>
#include <set>
#include <queue>
#include <sstream>
#include "Node.h"
#include "Graph.h"

Graph::Graph() {}

Graph::Graph(const char* file_name) {
    std::ifstream file(file_name);
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }

    int source, target;
    while (file >> source >> target) {
        Node* sourceNode = getNodeOrCreate(source);
        Node* targetNode = getNodeOrCreate(target);
        addEdge(sourceNode, targetNode);
    }

    file.close();
}

Graph::~Graph() {
    for (Node* node : nodes) {
        delete node;
    }
}

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

const Node* Graph::binarySearch(const std::string& name) const {
    int left = 0;
    int right = nodes.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        std::set<Node*>::const_iterator it = nodes.begin();
        std::advance(it, mid);
        const Node* midNode = *it;
        if (midNode->getName() == name) {
            return midNode;
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

Node* Graph::getNodeOrCreate(int nodeId) {
    const std::string nodeName = std::to_string(nodeId);
    const Node* existingNode = binarySearch(nodeName);
    if (existingNode) {
        return const_cast<Node*>(existingNode);
    }
    else {
        Node* newNode = new Node(nodeName);
        addNode(newNode);
        return newNode;
    }
}
