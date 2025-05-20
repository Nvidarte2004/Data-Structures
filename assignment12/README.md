# 🔍 Binary Search Algorithm in C++

This project demonstrates a simple and efficient implementation of the **Binary Search Algorithm** using an array in C++. Binary Search is a classic algorithm used to find the position of a target value within a **sorted array**.

---

## 📌 How It Works

Binary Search works by repeatedly dividing the search interval in half:

1. Start with the middle element of the sorted array.
2. If the target value matches the middle element, return the index.
3. If the target value is **greater**, search the **right half** of the array.
4. If the target value is **smaller**, search the **left half** of the array.
5. Repeat the steps until the value is found or the range is empty.

---

## ✅ When to Use Binary Search

- When your dataset is **sorted**.
- When you need **efficient lookup** in **O(log n)** time.
- Useful in large datasets where linear search would be too slow.

---

## 📂 Files

| File | Description |
|------|-------------|
| `main.cpp` | Main source file containing the binary search implementation |
| `README.md` | This file, providing an overview of the project |

---
## Sample output:
```
Enter the number to search: 10
Element found at index: 4
```
---
## screenshot
<img width="1395" alt="Screenshot 2025-05-19 at 5 26 46 PM" src="https://github.com/user-attachments/assets/87578848-ccb5-4817-8bfd-e16a829097d0" />
