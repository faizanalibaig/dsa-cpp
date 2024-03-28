//DNode
#include <iostream>
#include "DNode.cpp"
using namespace std;

int main() {
    DNode<string>* node = new DNode<string>();
    node->addtohead("faizan");
    node->addtohead("hello");

    DNode<int>* node1 = new DNode<int>();
    node1->addtotail(10);
    node1->addtotail(20);
  
    node->print(); // Output: hello faizan
    node1->print(); // Output: 20 10

    // delete node; // Free the memory allocated for node
    // delete node1; // Free the memory allocated for node1
    return 0;
}
