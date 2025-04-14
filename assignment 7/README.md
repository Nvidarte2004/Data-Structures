#  Binary Search Tree (BST) Insert & Delete - C++ Implementation

This project demonstrates how to **insert** and **delete** nodes in a **Binary Search Tree (BST)** using C++. It also includes an **in-order traversal** to display the tree structure in sorted order.

---

##  What is a BST?

A **Binary Search Tree** is a special type of binary tree where:
- All nodes in the **left subtree** of a node contain values **less than** the node's value.
- All nodes in the **right subtree** contain values **greater than** the node's value.
- There are **no duplicate values**.

This property allows efficient searching, insertion, and deletion.

---

## Features Implemented

-  Insert a node into the BST
-  Delete a node from the BST
-  Find the minimum node (used during deletion)
-  In-order traversal (displays nodes in sorted order)

---

##  Functions Explained

### `TreeNode`

A struct representing each node in the tree.

```cpp
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};
```
## InsertBST(int x, TreeNode* T)
Inserts a value x into the BST rooted at T.

If the tree is empty, it creates a new node.
If x is less than the current node's value, it inserts to the left.
If x is greater, it inserts to the right.
If x is equal, it does nothing (no duplicates allowed).

## DeleteBST(int x, TreeNode* T)
Deletes the value x from the BST rooted at T.

If the node has no children: delete it directly.
If the node has one child: link the parent to that child.
If the node has two children: find the minimum node in the right subtree, copy its value to the current node, and delete the minimum node recursively.

## FindMin(TreeNode* T)
Returns the node with the smallest value in the tree.

Used during deletion to find the in-order successor of a node with two children.

## InOrder(TreeNode* T)
Performs an in-order traversal (Left → Root → Right).

This prints the BST in ascending sorted order.

In-order traversal before deletion: 20 30 40 50 60 70 80 
In-order traversal after deleting 50: 20 30 40 60 70 80 


## screenshot
<img width="1251" alt="Screenshot 2025-04-14 at 9 26 42 AM" src="https://github.com/user-attachments/assets/7bcedde5-0347-4090-b8da-8bd7b7309c77" />

