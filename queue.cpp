#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int queue[MAX_SIZE];
int front = -1, rear = -1;


void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        cout << "Queue overflow" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = item;
    }
}


int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue underflow" << endl;
        return -1;
    } else {
        int item = queue[front];
        front++;
        return item;
    }
}


void display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}


bool is_empty() {
    return front == -1 || front > rear;
}


int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();   
    dequeue();
    display();   
    enqueue(40);
    display();   
    return 0;
}
