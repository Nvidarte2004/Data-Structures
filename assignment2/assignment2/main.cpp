#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
    
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    // Function to insert a node at a given index
    int DoubleLinkedlistInsert(int data, int index) {
        Node* newNode = new Node(data);
        if (!newNode) return -1; // Memory allocation failed

        if (index == 0) { // Insert at the beginning
            newNode->next = head;
            if (head) head->prev = newNode;
            head = newNode;
            return 0;
        }

        Node* temp = head;
        int count = 0;

        while (temp && count < index - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) return -1; // Index out of bounds

        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next) temp->next->prev = newNode;
        temp->next = newNode;

        return 0;
    }

    // Function to delete a node at a given index
    int DoubleLinkedlistDelete(int index) {
        if (!head) return -1; // List is empty

        Node* temp = head;

        if (index == 0) { // Delete the first node
            head = head->next;
            if (head) head->prev = nullptr;
            delete temp;
            return 0;
        }

        int count = 0;
        while (temp && count < index) {
            temp = temp->next;
            count++;
        }

        if (!temp) return -1; // Index out of bounds

        if (temp->prev) temp->prev->next = temp->next;
        if (temp->next) temp->next->prev = temp->prev;
        delete temp;

        return 0;
    }

    // Function to print the linked list
    void printList() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.DoubleLinkedlistInsert(10, 0);
    dll.DoubleLinkedlistInsert(20, 1);
    dll.DoubleLinkedlistInsert(30, 2);
    dll.DoubleLinkedlistInsert(15, 1);

    std::cout << "Doubly Linked List after insertions: ";
    dll.printList();

    dll.DoubleLinkedlistDelete(1);

    std::cout << "Doubly Linked List after deletion at index 1: ";
    dll.printList();

    return 0;
}

