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
        if(top == SIZE-1)
            cout << "Stack Overflow!" << endl;

        else { top++; arr[top] = item;
        cout << item << " pushed to stack." << endl; }
    }

    void pop() {
        if(top == -1)
            cout << "Stack Underflow!" << endl;
        else {
            cout << arr[top] << " popped from stack." << endl;
        top--; }
    }

    void peek() {
        if(top == -1)
            cout << "Stack is empty!" << endl;
        else
        cout << "Top element: " << arr[top] << endl;
    }

    void display() {
        if(top == -1)
            cout << "Stack is empty!" << endl;
        else {
            cout << "Stack elements: ";
            for(int i = top; i >= 0; i--) cout << arr[i] << " ";
            cout << endl;
        }
    }
};


class Queue {
private:
    int arr[SIZE];
    int front, rear;
public:
    Queue() { front = rear = -1; }

    void enqueue(int item) {
        if(rear == SIZE - 1)
            cout << "Queue Overflow!" << endl;
        else {
            if(front == -1 || front > rear)
            front = 0;
            rear++;
            arr[rear] = item;
            cout << item << " enqueued to queue." << endl;
        }
    }

    void dequeue() {
        if(front == -1 || front > rear)
            cout << "Queue Underflow!" << endl;
        else {
            cout << arr[front] << " dequeued from queue." << endl;
            front++;
            if(front > rear)
             front = rear = -1;
        }
    }

    void display() {
        if(front == -1 || front > rear)
            cout << "Queue is empty!" << endl;
        else {
            cout << "Queue elements: ";
            for(int i = front; i <= rear; i++)

            cout << arr[i] << " ";
            cout << endl;
        }
    }
};


class ArrayManager {
private:
    int arr[SIZE];
    int current_size;
public:
    ArrayManager() { current_size = 0; }

    void insert_beginning(int item) {
        if(current_size >= SIZE){
             cout << "Array Overflow!" << endl;
        return; }

        for(int i=current_size; i>0; i--){
            arr[i] = arr[i-1];}

        arr[0] = item;
        current_size++;

        cout << item << " inserted at beginning." << endl;
    }

    void insert_last(int item) {
        if(current_size >= SIZE) {
            cout << "Array Overflow!" << endl; return; }

        arr[current_size] = item;
        current_size++;
        cout << item << " inserted at end." << endl;
    }

    void insert_at_index(int item, int index) {
        if(current_size >= SIZE) {
                cout << "Array Overflow!" << endl;
                  return; }

        if(index<0 || index>current_size) {
                cout << "Invalid index!" << endl;
                  return; }
        for(int i=current_size; i>index; i--)
            arr[i] = arr[i-1];
        arr[index] = item;
        current_size++;
        cout << item << " inserted at index " << index << "." << endl;
    }

    void delete_beginning() {
        if(current_size == 0) {
                cout << "Array Underflow!" << endl;
        return; }
        cout << arr[0] << " deleted from beginning." << endl;
        for(int i=0; i<current_size-1; i++)
            arr[i] = arr[i+1];
            current_size--;
    }

    void delete_last() {
        if(current_size == 0) {
                cout << "Array Underflow!" << endl;
        return; }

        cout << arr[current_size-1] << " deleted from end." << endl;
        current_size--;
    }

    void delete_at_index(int index) {
        if(current_size == 0) {
                cout << "Array Underflow!" << endl;
        return; }
        if(index<0 || index>=current_size) {
                cout << "Invalid index!" << endl;
        return; }
        cout << arr[index] << " deleted from index " << index << "." << endl;
        for(int i=index; i<current_size-1; i++)
            arr[i]=arr[i+1];
        current_size--;
    }

    void print_array() {
        if(current_size==0) {
                cout << "Array is empty." << endl;
        return; }
        cout << "Array: [";
        for(int i=0;i<current_size;i++){
                cout << arr[i];
        if(i<current_size-1)
            cout << ", "; }
        cout << "]" << endl;
    }

    void print_in_reverse() {
        if(current_size==0) {
                cout << "Array is empty." << endl;
        return; }
        cout << "Array (Reverse): [";
        for(int i=current_size-1;i>=0;i--){
                cout << arr[i];
        if(i>0) cout << ", "; }
        cout << "]" << endl;
    }
};

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head = nullptr;

    void insertNode(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << value << " inserted into linked list." << endl;
    }

    void traverseList() {
        if (head == nullptr) {
            cout << "Linked List is empty!" << endl;
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    Stack s;
    Queue q;
    ArrayManager a;
    LinkedList l;

    int mainChoice, choice, value, index;

    do {
        cout << "\n--- Main Menu ---\n1. Stack\n2. Queue\n3. Array\n4. Linked List\n0. Exit\nEnter your choice: ";
        cin >> mainChoice;

        switch(mainChoice) {

            //STACK
            case 1:
                do {
                    cout << "\n--- Stack Menu ---\n1. Push\n2. Pop\n3. Peek\n4. Display\n0. Back\nEnter choice: ";
                    cin >> choice;
                    switch(choice) {
                        case 1: cout << "Enter value: "; cin >> value; s.push(value); break;
                        case 2: s.pop(); break;
                        case 3: s.peek(); break;
                        case 4: s.display(); break;
                        case 0: break;
                        default: cout << "Invalid choice!" << endl;
                    }
                } while(choice!=0);
                break;

            //QUEUE
            case 2:
                do {
                    cout << "\n--- Queue Menu ---\n1. Enqueue\n2. Dequeue\n3. Display\n0. Back\nEnter choice: ";
                    cin >> choice;
                    switch(choice) {
                        case 1: cout << "Enter value: "; cin >> value; q.enqueue(value); break;
                        case 2: q.dequeue(); break;
                        case 3: q.display(); break;
                        case 0: break;
                        default: cout << "Invalid choice!" << endl;
                    }
                } while(choice!=0);
                break;

            //ARRAY
            case 3:
                do {
                    cout << "\n--- Array Menu ---\n1. Insert\n2. Delete\n3. Print\n0. Back\nEnter your choice: ";
                    cin >> choice;
                    switch(choice) {

                        case 1:
                            int insertChoice;
                            do {
                                cout << "\n1. Insert at Beginning\n2. Insert at End\n3. Insert at Index\n0. Back\nEnter choice: ";
                                cin >> insertChoice;
                                switch(insertChoice) {
                                    case 1: cout << "Enter value: "; cin >> value; a.insert_beginning(value); break;
                                    case 2: cout << "Enter value: "; cin >> value; a.insert_last(value); break;
                                    case 3: cout << "Enter value: "; cin >> value; cout << "Enter index: "; cin >> index; a.insert_at_index(value,index); break;
                                    case 0: break;
                                    default: cout << "Invalid choice!" << endl;
                                }
                            } while(insertChoice != 0);
                            break;

                        case 2:
                            int delChoice;
                            do {
                                cout << "\n1. Delete Beginning\n2. Delete End\n3. Delete at Index\n0. Back\nEnter choice: ";
                                cin >> delChoice;
                                switch(delChoice) {
                                    case 1: a.delete_beginning(); break;
                                    case 2: a.delete_last(); break;
                                    case 3: cout << "Enter index to delete: "; cin >> index; a.delete_at_index(index); break;
                                    case 0: break;
                                    default: cout << "Invalid choice!" << endl;
                                }
                            } while(delChoice != 0);
                            break;

                        case 3:
                            int printChoice;
                            do {
                                cout << "\n1. Print Array\n2. Print Reverse\n0. Back\nEnter choice: ";
                                cin >> printChoice;
                                switch(printChoice) {
                                    case 1: a.print_array(); break;
                                    case 2: a.print_in_reverse(); break;
                                    case 0: break;
                                    default: cout << "Invalid choice!" << endl;
                                }
                            } while(printChoice != 0);
                            break;

                        case 0: break;
                        default: cout << "Invalid choice!" << endl;
                    }
                } while(choice!=0);
                break;

            //LINKED LIST
            case 4:
                do {
                    cout << "\n--- Linked List Menu ---\n1. Insert Node\n2. Traverse List\n0. Back\nEnter your choice: ";
                    cin >> choice;

                    switch(choice) {
                        case 1:
                            cout << "Enter value: ";
                            cin >> value;
                            l.insertNode(value);
                            break;

                        case 2:
                            l.traverseList();
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

    } while(mainChoice!=0);

    return 0;
}
