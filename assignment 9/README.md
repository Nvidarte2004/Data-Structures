#  B-Tree Insert Implementation in C++

This project is a basic implementation of a **B-Tree (B-minus Tree)** in C++. It demonstrates how keys are inserted into a B-Tree while maintaining its balanced structure.

---

##  What is a B-Tree?

A **B-Tree** is a self-balancing tree data structure used primarily in databases and file systems to maintain sorted data and allow searches, insertions, and deletions in logarithmic time. It generalizes a binary search tree by allowing nodes to have more than two children.

In this implementation:
- Each node can contain **at most 2t - 1 keys**.
- A node splits when it becomes full.
- All leaves appear on the same level.
- Keys are inserted such that the tree remains **balanced** and **sorted**.

---

##  Features

- Insert operation for any number of keys.
- Automatic node splitting when full.
- Traversal to display the sorted key sequence.

---

##  How It Works

1. **Insert Operation:**
   - If the root is full, a new root is created and the old root is split.
   - Keys are inserted recursively into the appropriate subtree.
   - If a node is full during insertion, it is split before proceeding.

2. **Node Splitting:**
   - The median key is moved up to the parent.
   - The full node is split into two child nodes.

3. **Traversal:**
   - The tree is traversed in an in-order style to display sorted keys.

---
##  screenshot
<img width="1509" alt="Screenshot 2025-04-22 at 2 16 55 PM" src="https://github.com/user-attachments/assets/e14fb1f6-daf5-4fd2-a59a-9b38036d12fc" />


---
##  Example

Given the following keys:
```cpp
{10, 20, 5, 6, 12, 30, 7, 17}
