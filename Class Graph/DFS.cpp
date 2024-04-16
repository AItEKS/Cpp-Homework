#include "DFS.h"

DFS::DFS(const Graph& graph) : graph(graph) {}

bool DFS::connected(const Node* begin, const Node* end) const {
    std::set<const Node*> visited;
    std::vector<const Node*> stack;
    stack.push_back(begin);

    while (!stack.empty()) {
        const Node* current = stack.back();
        stack.pop_back();

        if (current == end) {
            return true;
        }

        if (visited.find(current) == visited.end()) {
            visited.insert(current);
            stack.insert(stack.end(), current->nb_begin(), current->nb_end());
        }
    }

    return false;
}