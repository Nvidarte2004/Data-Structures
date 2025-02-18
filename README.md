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

## Delete item 0 in array:
<img width="967" alt="Screenshot 2025-02-18 at 2 44 27 PM" src="https://github.com/user-attachments/assets/160a6ac7-e902-4661-8d42-41e926cd6565" />

## Delete item 1 in array:
<img width="967" alt="Screenshot 2025-02-18 at 2 44 08 PM" src="https://github.com/user-attachments/assets/e1123d1f-3c1e-4b43-882f-65a10e7b8dd5" />

## Delete item 2 in array:
<img width="967" alt="Screenshot 2025-02-18 at 2 44 17 PM" src="https://github.com/user-attachments/assets/1a5d95f7-0321-43f2-a1ca-babb49db6072" />
