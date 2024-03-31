#include <iostream>
using namespace std;

template <class T>
class Node{
   public: 
    T data;
    Node<T> *next;

  Node(){
    data=0;
    next=NULL;
  }
};

template <class T>
class stack{
   public:
     Node<T> *top;

    stack(){
      top=NULL;
    }

void push(T data){
 
 Node<T> *node = new Node<T>();
 node->data = data;
 node->next = top;
 top = node;
}

void pop(){
 if(top == NULL){
    cout << "Stack is empty";
    return;
 }
 Node<T> *temp = top;
 top = top->next;
 delete temp;
}

bool empty(){
  return top==NULL;
}

void deleteAll(){
 while(!empty()){
    pop();
 }
}

void display(){
 if(top == NULL){
    cout << "Stack is empty";
    return;
 }
 Node<T> *temp = top;
 while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
 }
 cout << endl;
}


};

int main() {

  stack<int> *s=new stack<int>();
  s->push(10);
  s->push(20);
  s->push(30);

  s->display();
  
}
