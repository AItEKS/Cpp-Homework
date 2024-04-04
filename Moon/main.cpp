#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <chrono>
#include <cmath>
#include <iomanip>

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

std::string calculateTime(const std::string& hms, double timeDiff) {
    int hours = std::stoi(hms.substr(0, 2));
    int minutes = std::stoi(hms.substr(2, 2));
    int seconds = std::stoi(hms.substr(4, 2));

    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    totalSeconds += static_cast<int>(round(timeDiff));

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hours << ":"
        << std::setw(2) << std::setfill('0') << minutes << ":"
        << std::setw(2) << std::setfill('0') << seconds;

    return oss.str();
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
    double angularVelocity = 13.176397;

    for (int i = 0; i < lines.size() - 1; i++) {
        MoonData prev = processMoonData(lines[i]);
        MoonData next = processMoonData(lines[i + 1]);

        if (prev.El < 0 && next.El > 0) {
            double timeDiff = std::abs(prev.El) / (angularVelocity / 24 / 3600);
            std::string moonriseTime = calculateTime(prev.HMS, timeDiff);
            std::cout << "Восход: " << moonriseTime << std::endl;
        }

        if (prev.El > 0 && next.El < 0) {
            double timeDiff = prev.El / (angularVelocity / 24 / 3600);
            std::string moonsetTime = calculateTime(prev.HMS, timeDiff);
            std::cout << "Закат: " << moonsetTime << std::endl;
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
    std::cout << "Время работы программы: " << elapsed.count() << " секунд" << std::endl;

    return 0;
}
