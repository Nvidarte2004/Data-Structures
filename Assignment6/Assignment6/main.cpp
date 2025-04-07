//
//  main.cpp
//  Assignment6
//
//  Created by natalie vidarte on 4/6/25.
//

#include <iostream>
using namespace std;

const int TABLE_SIZE = 907;
int hashTable[TABLE_SIZE];

// Initialize hash table with -1 (indicating empty)
void initializeHashTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1;
    }
}

// Hash function: key mod TABLE_SIZE
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Linear probing insertion
int HashInsertion(int key) {
    int hashIndex = hashFunction(key);

    for (int i = 0; i < TABLE_SIZE; i++) {
        int probeIndex = (hashIndex + i) % TABLE_SIZE;

        if (hashTable[probeIndex] == -1 || hashTable[probeIndex] == -2) {
            hashTable[probeIndex] = key;
            return probeIndex;
        }
    }

    // Table is full
    return -1;
}

// Linear probing deletion
int HashDeletion(int key) {
    int hashIndex = hashFunction(key);

    for (int i = 0; i < TABLE_SIZE; i++) {
        int probeIndex = (hashIndex + i) % TABLE_SIZE;

        if (hashTable[probeIndex] == key) {
            hashTable[probeIndex] = -2; // mark as deleted
            return probeIndex;
        } else if (hashTable[probeIndex] == -1) {
            // key not found (empty slot encountered)
            break;
        }
    }

    // key not found
    return -1;
}

int main() {
    initializeHashTable();

    cout << "Inserting 1000 at index: " << HashInsertion(1000) << endl;
    cout << "Inserting 1814 at index: " << HashInsertion(1814) << endl; // collision with 1000
    cout << "Deleting 1000 from index: " << HashDeletion(1000) << endl;
    cout << "Deleting 999 (not in table): " << HashDeletion(999) << endl;

    return 0;
}
