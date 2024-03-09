//Linked List is a type of linear data
//structure. It is a collection of nodes.


//singly linked list with insertion in the start
#include <iostream>
using namespace std;

//node definition
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }
};

//addition at the end
void insertionAtTail(Node* &tail, int data){
    //node creation
    Node* temp=new Node(data);
    tail-> next=temp;
    tail=temp;
    
}

//addition at the start
void insertionAtHead(Node* &head, int data){
    //node creation
    Node* temp=new Node(data);
    temp -> next=head;
    head=temp;
}


//function for print of LinkedList
void print(Node* head){
    Node* temp=head;
    
    while(temp != NULL){
        cout << temp-> data <<" ";
        temp=temp-> next;
    }
}

//main function
int main() {
    Node* node= new Node(10);
    Node* head=node;
    Node* tail=node;
    
    insertionAtTail(tail,15);
    insertionAtHead(head, 12);
    print(head);
    return 0;
}
