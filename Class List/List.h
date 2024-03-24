#pragma once
#include <iostream>
using namespace std;

class LineListException : public exception {
public:
    const char* what() const noexcept override {
        return "LineList Exception";
    }
};

template <class T> class LineListElem {
    T data;
    LineListElem* next;
public:
    LineListElem(const T& adata, LineListElem* anext);
    const T& getData() const;
    void setNext(LineListElem* anext);
    LineListElem* getNext();
};

template <class T> class LineList {
    LineListElem<T>* start;
public:
    LineList();
    ~LineList();
    LineListElem<T>* getStart();
    void deleteFirst();
    void deleteAfter(LineListElem<T>* ptr);
    void insertFirst(const T& data);
    void insertAfter(LineListElem<T>* ptr, const T& data);
};

template <class T> LineListElem<T>::LineListElem(const T& adata, LineListElem<T>* anext) {
    data = adata;
    next = anext;
}

template <class T> const T& LineListElem<T>::getData() const {
    return data;
}

template <class T> void LineListElem<T>::setNext(LineListElem* anext) {
    next = anext;
}

template <class T> LineListElem<T>* LineListElem<T>::getNext() {
    return next;
}

template <class T> LineList<T>::LineList() {
    start = nullptr;
}

template <class T> LineList<T>::~LineList() {
    while (start)
        deleteFirst();
}

template <class T> void LineList<T>::insertFirst(const T& data) {
    if (!start) {
        start = new LineListElem<T>(data, nullptr);
        start->setNext(start);
    }
    else {
        insertAfter(start, data);
        start = start->getNext();
    }
}

template <class T> void LineList<T>::deleteAfter(LineListElem<T>* ptr) {
    if (ptr && ptr->next != ptr) {
        LineListElem<T>* temp = ptr->next;
        ptr->setNext(temp->getNext());
        delete temp;
    }
}

template <class T> void LineList<T>::deleteFirst() {
    if (start) {
        deleteAfter(start);
        if (start == start->getNext()) {
            delete start;
            start = nullptr;
        }
        else {
            LineListElem<T>* temp = start;
            start = start->getNext();
            delete temp;
        }
    }
    else throw LineListException();
}

template <class T> void LineList<T>::insertAfter(LineListElem<T>* ptr, const T& data) {
    if (ptr) {
        LineListElem<T>* temp = new LineListElem<T>(data, ptr->getNext());
        ptr->setNext(temp);
    }
}

template <class T> ostream& operator <<(ostream& out, LineList<T>& list) {
    LineListElem<T>* ptr = list.start;

    if (!ptr)
        out << "EMPTY ";
    else {
        do {
            out << ptr->getData() << ' ';
            ptr = ptr->getNext();
        } while (ptr != list.start);
    }

    return out;
}
