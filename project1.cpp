#include <iostream>
using namespace std;

#define SIZE 100


class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() { top = -1; }

    void push(int item) {
        if(top == SIZE-1) {
            cout << "Stack Overflow!" << endl;
        } else {
            top++;
            arr[top] = item;
            cout << item << " pushed to stack." << endl;
        }
    }

    void pop() {
        if(top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top] << " popped from stack." << endl;
            top--;
        }
    }

    void peek() {
        if(top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    void display() {
        if(top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for(int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == SIZE-1;
    }
};


class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() { front = rear = -1; }

    void enqueue(int item) {
        if(isFull()) {
            cout << "Queue Overflow!" << endl;
        } else {
            if(isEmpty()) front = 0;
            rear++;
            arr[rear] = item;
            cout << item << " enqueued to queue." << endl;
        }
    }

    void dequeue() {
        if(isEmpty()) {
            cout << "Queue Underflow!" << endl;
        } else {
            cout << arr[front] << " dequeued from queue." << endl;
            front++;
            if(front > rear) front = rear = -1;
        }
    }

    void display() {
        if(isEmpty()) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Queue elements: ";
            for(int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }


    bool isEmpty() {
        return front == -1 || front > rear;
    }


    bool isFull() {
        return rear == SIZE-1;
    }
};


int main() {
    Stack s;
    Queue q;
    int mainChoice, choice, value;

    do {
        cout << "\n--- Main Menu ---\n1. Stack\n2. Queue\n0. Exit\nEnter your choice: ";
        cin >> mainChoice;

        switch(mainChoice) {
            case 1:
                do {
                    cout << "\n--- Stack Menu ---\n1. Push\n2. Pop\n3. Peek\n4. Display\n0. Back\nEnter choice: ";
                    cin >> choice;
                    switch(choice) {
                        case 1:
                            cout << "Enter value to push: ";
                            cin >> value;
                            s.push(value);
                            break;
                        case 2:
                            s.pop();
                            break;
                        case 3:
                            s.peek();
                            break;
                        case 4:
                            s.display();
                            break;
                        case 0:
                            break;
                        default:
                            cout << "Invalid choice!" << endl;
                    }
                } while(choice != 0);
                break;

            case 2:
                do {
                    cout << "\n--- Queue Menu ---\n1. Enqueue\n2. Dequeue\n3. Display\n0. Back\nEnter choice: ";
                    cin >> choice;
                    switch(choice) {
                        case 1:
                            cout << "Enter value to enqueue: ";
                            cin >> value;
                            q.enqueue(value);
                            break;
                        case 2:
                            q.dequeue();
                            break;
                        case 3:
                            q.display();
                            break;
                        case 0:
                            break;
                        default:
                            cout << "Invalid choice!" << endl;
                    }
                } while(choice != 0);
                break;

            case 0:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(mainChoice != 0);

    return 0;
}
