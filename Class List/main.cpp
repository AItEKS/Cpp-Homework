#include <iostream>
#include <chrono>
using namespace std;

struct Person {
    int id;
    Person* next;
    Person(int x) : id(x), next(nullptr) {}
};

int josephusFlavius(int n, int k) {
    Person* start = new Person(1);
    Person* prev = start;

    for (int i = 2; i <= n; ++i) {
        prev->next = new Person(i);
        prev = prev->next;
    }

    prev->next = start;

    while (prev->next != prev) {
        for (int i = 1; i < k - 1; ++i) {
            prev = prev->next;
        }

        Person* temp = prev->next;
        //cout << "Удален человек с id: " << temp->id << endl;
        prev->next = temp->next;
        delete temp;

        prev = prev->next;
    }

    int lastPersonId = prev->id;
    delete prev;
    return lastPersonId;
}

int main() {
    setlocale(LC_ALL, "");
    int n = 1000000;
    int k = 3;

    auto start = chrono::high_resolution_clock::now();
    int lastPersonId = josephusFlavius(n, k);
    auto end = chrono::high_resolution_clock::now();

    cout << "Остался человек с id: " << lastPersonId + 1 << endl;
    chrono::duration<double> duration = end - start;
    cout << "Время: " << duration.count() << " секунд" << endl;
    return 0;
}
