# Circular Linked List-Based Queue

This repository contains a C++ implementation of a **Circular Linked List-based Queue** class, which provides the following operations:

- `enqueue()`: Add an element to the rear of the queue.
- `dequeue()`: Remove an element from the front of the queue.
- `getFront()`: Retrieve the element at the front of the queue.
- `isEmpty()`: Check if the queue is empty.

## Features
- Implemented using a circular linked list, ensuring efficient enqueue and dequeue operations with constant time complexity.
- Handles edge cases like empty queues and circular link maintenance.

## Queue Operations

### 1. Constructor
The constructor initializes an empty queue, with both `front` and `rear` set to `nullptr`.

### 2. `bool isEmpty()`
Returns `true` if the queue is empty, otherwise returns `false`.

### 3. `void enqueue(int value)`
Adds a new element to the rear of the queue. If the queue is empty, the new node becomes both the front and the rear. 

### 4. `void dequeue()`
Removes an element from the front of the queue. If there's only one element in the queue, both `front` and `rear` are reset to `nullptr`.

### 5. `void getFront()`
Displays the data of the front element of the queue. If the queue is empty, it shows a message indicating so.

## Example

```cpp
CircularQueue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);

q.getFront(); // Output: Front element is: 10

q.dequeue();
q.getFront(); // Output: Front element is: 20

q.dequeue();
q.dequeue();
q.dequeue(); // Output: Queue is empty, cannot dequeue! ```

## Screenshot
<img width="1389" alt="Screenshot 2025-03-09 at 2 06 50 PM" src="https://github.com/user-attachments/assets/96c79362-eabd-4dc4-88ab-4636978ac6c2" />


## Author
Natalie Vidarte



