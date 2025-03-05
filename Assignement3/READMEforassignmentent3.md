# Stack Operations in C++

## Description
This project demonstrates the implementation of basic stack operations using C++. The two main operations implemented are:

1. **push(T, stack<int>&)** - Pushes an integer `T` onto the stack.
2. **topAndPop(stack<int>&)** - Returns and removes the top element of the stack.

The program makes use of the C++ Standard Library's `stack<int>` to perform these operations efficiently.

## How It Works
- The `push` function takes an integer and a stack reference as arguments, adds the integer to the stack, and returns the pushed value.
- The `topAndPop` function retrieves the topmost element of the stack, removes it, and returns its value. If the stack is empty, it prints an error message.

## Files
- `main.cpp`: Contains the implementation of the stack operations.
- `READMEforassignments.md`: This documentation file explaining the project.

## Example Output
```
Pushed: 10
Pushed: 20
Pushed: 30
Top and Popped: 30
Top and Popped: 20
Top and Popped: 10
Error: Stack is empty!
```

Photo of Output:
<img width="1377" alt="Screenshot 2025-03-05 at 12 05 21 PM" src="https://github.com/user-attachments/assets/9dde4ecf-ad84-4683-b478-5d87f3e7706a" />


## Requirements
- C++ compiler 

## Notes
- The program handles empty stack cases by printing an error message when attempting to pop an empty stack.
- The stack follows LIFO (Last-In, First-Out) behavior.

## Author
- Natalie Vidarte
