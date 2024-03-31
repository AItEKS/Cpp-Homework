#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <chrono>

bool checkSubstr(const std::string& str, const std::string& substr) {
    return str.find(substr) != std::string::npos;
}

struct MoonData {
    std::string YMD;
    std::string HMS;
    double T, R, El, Az, FI, LG;
};


MoonData processMoonData(const std::string& input) {
    std::istringstream iss(input);
    MoonData data;

    iss >> data.YMD >> data.HMS >> data.T >> data.R >> data.El >> data.Az >> data.FI >> data.LG;

    return data;
}

void DataStrBreak(std::string input) {
    std::string hours = input.substr(0, 2);
    std::string minutes = input.substr(2, 2);
    std::string seconds = input.substr(4, 2);

    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
}

int main() {
    setlocale(LC_ALL, "");

    auto start = std::chrono::high_resolution_clock::now();

    std::string day, month, year;
    std::cout << "Date: ";
    std::cin >> day >> month >> year;

    std::vector<std::string> lines;

    std::ifstream file("Moon/moon" + year + ".dat");
    std::string line;
    while (std::getline(file, line)) {
        if (checkSubstr(line, year + month + day)) {
            lines.push_back(line);
        }
    }

    double maxAngle = 0;
    std::string time;
    for(int i = 0; i < lines.size() - 1; i++) {
        MoonData prev = processMoonData(lines[i]);
        MoonData next = processMoonData(lines[i + 1]);

        if (prev.El < 0 && next.El > 0) {
            std::cout << "Восход: "; DataStrBreak(next.HMS);
        }

        if (prev.El > 0 && next.El < 0) {
            std::cout << "Закат: "; DataStrBreak(next.HMS);
        }

        if (prev.El > maxAngle) {
            maxAngle = prev.El;
            time = prev.HMS;
        }
    }

    std::cout << "Кульминация: ";
    DataStrBreak(time);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Time taken by the program: " << elapsed.count();

    return 0;
}
