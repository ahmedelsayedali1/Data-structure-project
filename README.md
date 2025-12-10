# Data-structure-project
This repository showcases a collection of data structure implementations, including arrays, linked lists, stacks, queues, trees, and graph representations. It serves as part of my academic projects and personal learning archive.

# 💾 Basic Data Structures Implementation in C++

This repository contains a C++ console application that implements and allows interactive testing of four fundamental data structures: Stack, Queue, Array, and Singly Linked List. All structures (except the Linked List) are implemented using fixed-size arrays defined by the preprocessor directive `#define SIZE 100`.

The program utilizes an interactive main menu to switch between data structure operations.

## ✨ Implemented Data Structures

### 1. Stack (LIFO)

Implemented using a fixed-size array (`arr`) and an integer pointer (`top`).

* **Operations:**
    * `push(item)`: Adds an element to the top of the stack. Checks for **Overflow**.
    * `pop()`: Removes and returns the element from the top. Checks for **Underflow**.
    * `peek()`: Views the top element without removing it.
    * `display()`: Prints all elements from top to bottom.

### 2. Queue (FIFO)

Implemented using a fixed-size array (`arr`) with two integer pointers, `front` and `rear`.

* **Operations:**
    * `enqueue(item)`: Adds an element to the `rear` of the queue. Checks for **Overflow**.
    * `dequeue()`: Removes and returns the element from the `front` of the queue. Checks for **Underflow**.
    * `display()`: Prints all elements from front to rear.

### 3. Array Manager

Implements standard array operations using a fixed-size array and tracks the current number of elements (`current_size`).

* **Insertion Operations:**
    * `insert_beginning(item)`: Inserts at index 0 (requires shifting elements).
    * `insert_last(item)`: Inserts at the end (simple append).
    * `insert_at_index(item, index)`: Inserts at a specific index (requires shifting elements).
    * *Includes checks for **Array Overflow** and **Invalid Index**.*

* **Deletion Operations:**
    * `delete_beginning()`: Deletes the first element (requires shifting elements).
    * `delete_last()`: Deletes the last element.
    * `delete_at_index(index)`: Deletes element at an index (requires shifting elements).
    * *Includes checks for **Array Underflow** and **Invalid Index**.*

* **Display Operations:**
    * `print_array()`: Prints the array elements in sequence.
    * `print_in_reverse()`: Prints the array elements in reverse sequence.

### 4. Singly Linked List

Implemented using dynamic memory allocation, `Node` objects, and a `head` pointer.

* **Operations:**
    * `insertNode(value)`: Adds a new node to the **end** of the list.
    * `traverseList()`: Prints all elements in the list sequentially.

## 🛠️ Technology Used

* **Language:** C++
* **Concepts:** Object-Oriented Programming (OOP) via Classes, Pointers, Arrays, and Control Flow.

## 🚀 Getting Started

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/ahmedelsayedali1/Data-structure-project.git]
    ```
2.  **Compile the code:** Use a C++ compiler (e.g., g++):
    ```bash
     Data-structure-project.cpp
    ```

