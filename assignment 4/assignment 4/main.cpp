//
//  main
//  assignment 4
//
//  Created by natalie vidarte on 3/9/25.
//
#include <iostream>
using namespace std;

// Node structure for the Circular Linked List
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Queue class using Circular Linked List
class CircularQueue {
private:
    Node* front;
    Node* rear;

public:
    // Constructor to initialize the queue
    CircularQueue() {
        front = rear = nullptr;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Enqueue operation: Add an element to the rear of the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);

        // If the queue is empty, the new node will be both the front and the rear
        if (isEmpty()) {
            front = rear = newNode;
            rear->next = front;  // Circular link
        } else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;  // Maintain the circular link
        }
    }

    // Dequeue operation: Remove an element from the front of the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue!" << endl;
            return;
        }

        // If there's only one element in the queue
        if (front == rear) {
            delete front;
            front = rear = nullptr;
        } else {
            Node* temp = front;
            front = front->next;
            rear->next = front;  // Maintain the circular link
            delete temp;
        }
    }

    // Get the element at the front of the queue
    void getFront() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Front element is: " << front->data << endl;
    }
};

// Driver code to test the CircularQueue class
int main() {
    CircularQueue q;

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Check front element
    q.getFront(); // Output: 10

    // Dequeue one element
    q.dequeue();

    // Check front element again
    q.getFront(); // Output: 20

    // Dequeue the rest
    q.dequeue();
    q.dequeue();

    // Attempt to dequeue from an empty queue
    q.dequeue(); // Output: Queue is empty, cannot dequeue!

    return 0;
}
