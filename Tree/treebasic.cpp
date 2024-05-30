#include <iostream>

using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

class binarytree {
public:
    node* root;

    binarytree() {
        this->root = NULL;
    }

    void insert(node*& root, int data) {
        if (root == NULL) {
            root = new node(data);
            return;
        }

        if (data < root->data) {
            insert(root->left, data);
        } else if (data > root->data) {
            insert(root->right, data);
        }
    }

    void insert(int data) {
        insert(root, data);
    }

    bool search(node* root, int data) {
        if (root == NULL) {
            return false;
        }

        if (root->data == data) {
            return true;
        }

        if (data < root->data) {
            return search(root->left, data);
        } else {
            return search(root->right, data);
        }
    }

    bool search(int data) {
        return search(root, data);
    }

    void inorder(node* root) {
        if (root == NULL) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void preorder(node* root) {
        if (root == NULL) return;
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(node* root) {
        if (root == NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }

    void inorder() {
        inorder(root);
        cout << endl;
    }

    void preorder() {
        preorder(root);
        cout << endl;
    }

    void postorder() {
        postorder(root);
        cout << endl;
    }
};

int main() {
    binarytree b;
    int data, option;

    do {
        cout << "Add a node: 1" << endl
             << "Search a node: 2" << endl
             << "In-order Traversal: 3" << endl
             << "Pre-order Traversal: 4" << endl
             << "Post-order Traversal: 5" << endl
             << "Exit: 0" << endl;
        cout << "Enter option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter data in the tree: ";
                cin >> data;
                b.insert(data);
                break;
            case 2:
                cout << "Enter data to search: ";
                cin >> data;
                if (b.search(data)) {
                    cout << "Found" << endl;
                } else {
                    cout << "Not found" << endl;
                }
                break;
            case 3:
                cout << "In-order Traversal: ";
                b.inorder();
                break;
            case 4:
                cout << "Pre-order Traversal: ";
                b.preorder();
                break;
            case 5:
                cout << "Post-order Traversal: ";
                b.postorder();
                break;
        }
    } while (option != 0);

    return 0;
}
