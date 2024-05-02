#include "Graph.h"
#include "Node.h"
#include "Node.cpp"

Graph::Graph() {}

Graph::Graph(const std::vector<std::vector<int>>& grid) {
    for (const auto& row : grid) {
        std::vector<Node*> rowNodes;
        for (int value : row) {
            Node* node = new Node(value);
            addNode(node);
            rowNodes.push_back(node);
        }
        for (size_t i = 0; i < rowNodes.size(); ++i) {
            if (i > 0) addEdge(rowNodes[i], rowNodes[i - 1]);
            if (i < rowNodes.size() - 1) addEdge(rowNodes[i], rowNodes[i + 1]);
            if (row.size() > 1 && i < row.size() - 1) addEdge(rowNodes[i], rowNodes[i + 1]);
        }
    }
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
    for (Node* n : nodes) {
        n->removeNeighbour(node);
    }
}

void Graph::addEdge(Node* begin, Node* end) {
    begin->addNeighbour(end);
    end->addNeighbour(begin);
}

void Graph::removeEdge(Node* begin, Node* end) {
    begin->removeNeighbour(end);
    end->removeNeighbour(begin);
}

std::set<Node*>::const_iterator Graph::begin() const {
    return nodes.begin();
}

std::set<Node*>::const_iterator Graph::end() const {
    return nodes.end();
}
