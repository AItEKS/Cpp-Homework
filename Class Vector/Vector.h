#pragma once
#include <iostream>
#include <climits>

const int DEFAULT_CAPACITY = 10;
class ArrayException {};

template <class T>
class Array {
private:
    T* ptr;
    int size, capacity;

public:
    // ������������ � ����������
    explicit Array(int startCapacity = DEFAULT_CAPACITY) {
        if (startCapacity <= 0)
            capacity = DEFAULT_CAPACITY;
        else
            capacity = startCapacity;
        ptr = new T[capacity]();
        size = 0;
    }

    ~Array() {
        delete[] ptr;
    }

    // ����������� �����������
    Array(const Array& arr) {
        ptr = new T[arr.capacity];
        size = arr.size;
        capacity = arr.capacity;
        for (int i = 0; i < size; i++)
            ptr[i] = arr.ptr[i];
    }

    // �������� ������������
    Array& operator=(const Array& arr) {
        if (this == &arr)
            return *this;
        if (capacity != arr.capacity) {
            delete[] ptr;
            ptr = new T[arr.capacity];
            capacity = arr.capacity;
        }
        size = arr.size;
        for (int i = 0; i < size; i++)
            ptr[i] = arr.ptr[i];
        return *this;
    }

    // �������� ����������
    T& operator[](int index) {
        if (index >= size || index < 0)
            throw ArrayException();
        else
            return ptr[index];
    }

    // ������� �������� �� ���������� �������
    void insert(T elem, int index) {
        if (index < 0 || index > size)
            throw ArrayException();
        if (size == capacity)
            increaseCapacity(size + 1);
        for (int j = size - 1; j >= index; j--)
            ptr[j + 1] = ptr[j];
        size++;
        ptr[index] = elem;
    }

    // ������� �������� � ����� �������
    void insert(T elem) {
        insert(elem, size);
    }

    // ���������� ������� �������
    void increaseCapacity(int newCapacity) {
        capacity = newCapacity < capacity * 2 ? capacity * 2 : newCapacity;
        T* newPtr = new T[capacity];
        for (int i = 0; i < size; i++)
            newPtr[i] = ptr[i];
        delete[] ptr;
        ptr = newPtr;
    }

    // �������� �������� �� ���������� �������
    void remove(int index) {
        if (index < 0 || index >= size)
            throw ArrayException();
        for (int j = index; j < size - 1; j++)
            ptr[j] = ptr[j + 1];
        ptr[size - 1] = T();
        size--;
    }

    // ��������� �������� �� ���������� �������
    T get(int index) const {
        if (index >= size || index < 0)
            throw ArrayException();
        else
            return ptr[index];
    }

    // ��������� �������� �� ���������� �������
    void set(int index, T elem) {
        if (index >= size || index < 0)
            throw ArrayException();
        else
            ptr[index] = elem;
    }

    // ��������� �������� ������� �������
    int getSize() const {
        return size;
    }

    // ��������� ������� ������� �������
    int getCapacity() const {
        return capacity;
    }

    // ��������� ����������� ���������� ������� �������
    int max_size() const {
        return INT_MAX;
    }

    // ������������� ������� ��� ������ ��������� �������
    friend std::ostream& operator<<(std::ostream& out, const Array& arr) {
        out << "����� ������: " << arr.size << std::endl;
        for (int i = 0; i < arr.size; i++)
            out << arr.ptr[i] << std::endl;
        return out;
    }

    // ������� ������� � ����� ��� ������� � ������� �� ����
    void clear() {
        delete[] ptr;
        size = 0;
        capacity = 0;
    }

    // ��������, ���� �� ������
    bool isEmpty() {
        return size == 0;
    }

    // �������� ���������� �������� � �������
    void pop_back() {
        if (size > 0) {
            remove(size - 1);
            size--;
        }
    }
};