#include <iostream>
#include <vector>
#include <fstream>
#include "Graph.h"
#include "Node.h"
#include "BFS.h"
#include <filesystem>

void separateConnectedComponents(const Graph& graph) {
    std::set<const Node*> visited;
    int componentIndex = 1;

    std::filesystem::create_directory("Answer");

    for (const Node* node : graph) {
        if (visited.find(node) == visited.end()) {
            std::ofstream outFile("Answer/Component_" + std::to_string(componentIndex) + ".txt");
            std::queue<const Node*> queue;
            queue.push(node);

            while (!queue.empty()) {
                const Node* current = queue.front();
                queue.pop();

                if (visited.find(current) == visited.end()) {
                    visited.insert(current);
                    outFile << current->getName() << std::endl;

                    for (auto neighbor = current->nb_begin(); neighbor != current->nb_end(); ++neighbor) {
                        queue.push(*neighbor);
                    }
                }
            }

            componentIndex++;
            outFile.close();
        }
    }
}

int main() {
    Graph graph("1000.csv");
    separateConnectedComponents(graph);
    return 0;
}
