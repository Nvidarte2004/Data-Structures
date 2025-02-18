//
//  main.cpp
//  Assignment1
//
//  Created by natalie vidarte on 2/18/25.
//

#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;
    
    LinkedList() { head = nullptr; }
    
    int LinkedlistInsert(int data, int index) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        
        if (index < 0) return -1;
        
        if (index == 0) {
            newNode->next = head;
            head = newNode;
            return 0;
        }
        
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < index - 1; i++) {
            temp = temp->next;
        }
        
        if (temp == nullptr) return -1; // Index out of bounds
        
        newNode->next = temp->next;
        temp->next = newNode;
        return 0;
    }
    
    int LinkedlistDelete(int index) {
        if (head == nullptr || index < 0) return -1;
        
        Node* temp = head;
        if (index == 0) {
            head = head->next;
            delete temp;
            return 0;
        }
        
        Node* prev = nullptr;
        for (int i = 0; temp != nullptr && i < index; i++) {
            prev = temp;
            temp = temp->next;
        }
        
        if (temp == nullptr) return -1; // Index out of bounds
        
        prev->next = temp->next;
        delete temp;
        return 0;
    }
    
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.LinkedlistInsert(10, 0);
    list.LinkedlistInsert(20, 1);
    list.LinkedlistInsert(30, 2);
    list.LinkedlistInsert(15, 1);
    
    list.printList(); // Expected: 10 -> 15 -> 20 -> 30 -> NULL
    
    list.LinkedlistDelete(0);
    
    list.printList(); // Expected: 10 -> 20 -> 30 -> NULL
    
    return 0;
}

