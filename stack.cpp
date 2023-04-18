#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int stack[MAX_SIZE];
int top = -1;


void push(int item) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack overflow" << endl;
    } else {
        top++;
        stack[top] = item;
    }
}


int pop() {
    if (top == -1) {
        cout << "Stack underflow" << endl;
        return -1;
    } else {
        int item = stack[top];
        top--;
        return item;
    }
}


void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}


bool is_empty() {
    return top == -1;
}


int main() {
    push(10);
    push(20);
    push(30);
    display();  
    pop();
    display();   
    push(40);
    display();   
    return 0;
}
