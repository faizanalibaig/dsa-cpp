#include <iostream>
#include "Linkedlist.cpp"
using namespace std;

template<class T>
class DNode {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    DNode() : head(nullptr), tail(nullptr){}

    Node<T>* getHead() {
        return this->head;
    }

    void setHead(Node<T>* head) {
        this->head = head;
    }

    Node<T>* getTail() {
        return this->tail;
    }

    void setTail(Node<T>* tail) {
        this->tail = tail;
    }

    void addtohead(T data); // Forward declaration
    void addtotail(T data);
    void print(); // Forward declaration
};

// Define addtohead and print outside the class
template<class T>
void DNode<T>::addtohead(T data) {
    Node<T>* node = new Node<T>();
    node->setData(data);
    node->setNext(getHead());
    setHead(node);
    if (getTail() == nullptr) {
        setTail(node);
    }
}

template<class T>
void DNode<T>::addtotail(T data){
  Node<T>* node= new Node<T>();
  node->setData(data);
  node->setNext(nullptr);
  
  if(getTail()!=nullptr){
    getTail()->setNext(node);
  }
  setTail(node);

  if(getHead()==nullptr){
    setHead(node);
  }
  
}

template<class T>
void DNode<T>::print() {
    Node<T>* temp = getHead();
    while (temp != nullptr) {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
}
