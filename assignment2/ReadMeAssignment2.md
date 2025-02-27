# Doubly Linked List Implementation in C++

## Overview
This project implements a **Doubly Linked List** in C++ with the following functionalities:

- **Insertion**: Insert a node at a specific index.
- **Deletion**: Delete a node at a specific index.
- **Printing**: Display the linked list.

## Files
- `main.cpp` - Contains the implementation of the **Doubly Linked List** and its functions.

## Features
### 1. Insert a Node at a Specific Index
```cpp
int DoubleLinkedlistInsert(int data, int index);
```
- Inserts a new node containing `data` at position `index`.
- Returns `0` on success, `-1` if insertion fails.

### 2. Delete a Node at a Specific Index
```cpp
int DoubleLinkedlistDelete(int index);
```
- Deletes a node at position `index`.
- Returns `0` on success, `-1` if the deletion fails.

### 3. Print the List
```cpp
void printList();
```
- Displays the elements of the linked list.

## Example Output
```
Doubly Linked List after insertions: 10 15 20 30
Doubly Linked List after deletion at index 1: 10 20 30
```

## Notes
- The program uses dynamic memory allocation (`new` and `delete`) for managing nodes.
- It checks for edge cases like inserting at the head or deleting the first node.
- It ensures proper linking between previous and next nodes after modifications.

## Author
- **Natalie Vidarte**

<img width="982" alt="Screenshot 2025-02-26 at 7 37 49 PM" src="https://github.com/user-attachments/assets/a038d492-215f-4be9-be08-afe65c2ae17c" />
