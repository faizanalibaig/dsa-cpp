//Linkedlist
#include <iostream>
using namespace std;

template <class T>
class Node {
private:
    T data;
    Node<T>* next;

public:
    Node() : data(), next(nullptr) {}

    T getData() {
        return this->data;
    }

    void setData(T data) {
        this->data = data;
    }

    Node<T>* getNext() {
        return this->next;
    }

    void setNext(Node<T>* next) {
        this->next = next;
    }
};
