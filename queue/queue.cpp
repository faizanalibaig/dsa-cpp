#include <iostream>
#define size 100
using namespace std;

class queue {
    int *arr;
    int front;
    int rear;

public:
    queue() {
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data) {
        if (rear == size) {
            cout << "queue overflow" << endl;
            return;
        }

        arr[rear] = data;
        rear++;
    }

    void pop() {
        if (front == rear) {
            cout << "queue underflow" << endl;
            return;
        }
        arr[front]=-1;
        front++;
    }

    bool empty() {
        return front == rear;
    }

    int getfront() {
        if (front == rear) {
            cout << "queue underflow" << endl;
            return -1;
        }

        return arr[front];
    }

    int getRear() {
        if (front == rear) {
            cout << "queue underflow" << endl;
            return -1;
        }

        return arr[rear - 1];
    }

   void peek() {
    if (front == rear) {
        cout << "queue underflow" << endl;
        return;
    }

    for (int i = front; i <=rear-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

};

int main() {
    queue q;
    q.push(1);
    q.push(2);

    q.peek();

    return 0;
}
