Linked List is a type of linear data
structure. It is collection of nodes.


//singly linked list with insertion in the start
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }
};

void insertionAtTail(Node* &tail, int data){
    Node* temp=new Node(data);
    tail-> next=temp;
    tail=temp;
    
}

void insertionAtHead(Node* &head, int data){
    Node* temp=new Node(data);
    temp -> next=head;
    head=temp;
}

void print(Node* head){
    Node* temp=head;
    
    while(temp != NULL){
        cout << temp-> data <<" ";
        temp=temp-> next;
    }
}

int main() {
    Node* node= new Node(10);
    Node* head=node;
    Node* tail=node;
    
    insertionAtTail(tail,15);
    insertionAtHead(head, 12);
    print(head);
    return 0;
}