#include "BFS.h"

BFS::BFS(const Graph& graph, const Node* startNode) : graph(graph), startNode(startNode) {}

bool BFS::connected(const Node* endNode) const {
    std::set<const Node*> visited;
    std::queue<const Node*> queue;
    queue.push(startNode);

    while (!queue.empty()) {
        const Node* current = queue.front();
        queue.pop();

        if (current == endNode) {
            return true;
        }

        if (visited.find(current) == visited.end()) {
            visited.insert(current);
            for (auto neighbor = current->nb_begin(); neighbor != current->nb_end(); ++neighbor) {
                queue.push(*neighbor);
            }
        }
    }

    return false;
}