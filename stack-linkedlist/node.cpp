#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node<T> *next;

  Node() : data(), next(nullptr){}

};