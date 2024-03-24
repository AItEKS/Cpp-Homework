#include <iostream>
#include <chrono>
#include "Vector.h"

void josephusProblem(Array<int>& arr, int n, int k) {
    for (int i = 1; i <= n; i++) {
        arr.insert(i);
    }

    int index = 0;
    while (arr.getSize() > 1) {
        index = (index + k - 1) % arr.getSize();
        arr.remove(index);
    }

    std::cout << "The last person is: " << arr.get(0) << std::endl;
}

int main() {
    int n, k;
    std::cout << "Enter the number of people (n): ";
    std::cin >> n;
    std::cout << "Enter the interval (k): ";
    std::cin >> k;

    Array<int> arr(n);

    auto start = std::chrono::high_resolution_clock::now();
    josephusProblem(arr, n, k);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    std::cout << "Time: " << duration.count() << " seconds" << std::endl;

    return 0;
}
