#include <iostream>
#include "node.cpp"
using namespace std;

template <class T>
class Stack{
 private:
   Node<T> *top;

 public:
   Stack(){
     top=NULL;
   }

   void push(T data);
   void pop();
   T topElement();
   bool empty();
   void display();
};

template <class T>
void Stack<T>::push(T data){
 Node<T> *temp=new Node<T>();
 temp->data=data;
 temp->next=top;
 top=temp;
}

template <class T>
void Stack<T>::pop(){
 if(top==NULL){
    cout<<"Stack underflow";
    return;
 }

 Node<T> *temp=top;
 top=top->next;
 // delete temp; // Deleting the node to avoid memory leak
}

template <class T>
T Stack<T>::topElement(){
 if(top==NULL){
    cout<<"Stack underflow";
    return T(); // Return a default-constructed object of type T
 }

 return top->data;
}

template <class T>
bool Stack<T>::empty(){
 return top==NULL;
}

template <class T>
void Stack<T>::display(){
 if(top==NULL){
    cout<<"Stack is empty";
    return;
 }

 Node<T> *temp=top;
 while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
 }
 cout<<endl;
}
