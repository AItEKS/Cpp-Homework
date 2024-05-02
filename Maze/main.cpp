#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Node.h"
#include "Graph.h"
#include "Graph.cpp"

void reader(std::vector<std::vector<int>>& array) {
    std::ifstream file("labirint.txt");
    std::string line;

    while (std::getline(file, line)) {
        std::vector<int> row;
        std::stringstream ss(line);
        std::string value;

        while (std::getline(ss, value, ' ')) {
            row.push_back(std::stoi(value));
        }

        array.push_back(row);
    }

    file.close();
}

int main() {
    std::vector<std::vector<int>> grid;
    reader(grid);

    Graph graph(grid);

    for (auto it = graph.begin(); it != graph.end(); ++it) {
        Node* node = *it;
        std::cout << "Node: " << node->getValue() << " Neighbours: ";
        for (auto nb_it = node->nb_begin(); nb_it != node->nb_end(); ++nb_it) {
            Node* neighbour = *nb_it;
            std::cout << neighbour->getValue() << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
