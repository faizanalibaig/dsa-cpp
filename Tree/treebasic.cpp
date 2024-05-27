#include <iostream>
using namespace std;

// Define the Node class
class Node {
private:
    int data;
    Node* left;
    Node* right;

public:
    // Constructor to create a new node
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

    // Getter for data
    int getData() {
        return data;
    }

    // Getter for left child
    Node* getLeft() {
        return left;
    }

    // Getter for right child
    Node* getRight() {
        return right;
    }

    // Setter for left child
    void setLeft(Node* leftNode) {
        left = leftNode;
    }

    // Setter for right child
    void setRight(Node* rightNode) {
        right = rightNode;
    }
};

// Function to insert a node in the binary tree
Node* insertNode(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    } else if (data < root->getData()) {
        root->setLeft(insertNode(root->getLeft(), data));
    } else {
        root->setRight(insertNode(root->getRight(), data));
    }
    return root;
}

// In-order traversal
void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->getLeft());
        cout << root->getData() << " ";
        inOrder(root->getRight());
    }
}

// Pre-order traversal
void preOrder(Node* root) {
    if (root != nullptr) {
        cout << root->getData() << " ";
        preOrder(root->getLeft());
        preOrder(root->getRight());
    }
}

// Post-order traversal
void postOrder(Node* root) {
    if (root != nullptr) {
        postOrder(root->getLeft());
        postOrder(root->getRight());
        cout << root->getData() << " ";
    }
}

int main() {
    Node* root = nullptr;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}

