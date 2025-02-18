# Singly Linked List Implementation in C++

## Overview
This project provides a simple **Singly Linked List** implementation in C++ with **insert** and **delete** operations. The program allows users to:
- Insert a new node at a specified index.
- Delete a node from a specified index.
- Print the linked list.

## Features
- Insert elements at any position in the list.
- Delete elements from any position.
- Print the entire list in a readable format.

## File Structure
Assignment1
  -> Assignment1.xcodeproj
  -> Assignment1
        -> main.cpp

## 🏗️ Installation & Usage
### Prerequisites
- C++ Compiler
- A terminal or an IDE (e.g., VS Code, CLion, Code::Blocks)

Code Explanation
🔹 LinkedlistInsert(int data, int index)
Inserts a new node with data at a given index.
Returns 0 on success, -1 on failure.
🔹 LinkedlistDelete(int index)
Removes a node at a given index.
Returns 0 on success, -1 on failure.
🔹 printList()
Prints the elements of the linked list.

**Example:**
LinkedList list;
list.LinkedlistInsert(10, 0);
list.LinkedlistInsert(20, 1);
list.LinkedlistInsert(30, 2);
list.printList();  // Output: 10 -> 20 -> 30 -> NULL

list.LinkedlistDelete(1);
list.printList();  // Output: 10 -> 30 -> NULL
