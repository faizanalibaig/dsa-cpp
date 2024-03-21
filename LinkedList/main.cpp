//singly LinkedList
#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//insertion at head
void insertAtFirst(Node* &head, int data){
    //create a node 
    Node* node=new Node(data);
    node->next=head;
    head=node;
    
}

//insertion at tail
void insertAtEnd(Node* &tail, int data){
    Node* node=new Node(data);
    tail->next=node;
    tail=tail->next;
}

//insertion at any position
void insertAtMiddle(Node* &head, int position, int data){
    Node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    
    Node* node=new Node(data);
    node->next=temp->next;
    temp->next=node;
    
}

//print linked list
void print(Node* &head){
    Node* temp=head;
    
    while(temp!=NULL){
        cout<< temp->data <<" ";
        temp=temp->next;
    }
    cout<< endl;
}

//main function
int main() {
  //node creation
    Node* node1= new Node(10);
    Node* head=node1;
    Node* tail=node1;
    
    insertAtFirst(head, 12);
    insertAtFirst(head, 15);
    insertAtEnd(tail, 20);
    insertAtEnd(tail, 22);
    insertAtEnd(tail, 24);

    insertAtMiddle(head, 3, 30);

    print(head);

    return 0;
}
