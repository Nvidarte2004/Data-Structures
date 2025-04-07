# Hash Table Implementation in C++

This project demonstrates a simple implementation of a hash table using **linear probing** as the collision resolution strategy.

## Features

- Fixed table size of `907`
- Hash function: `key % 907`
- Linear probing: `hash(K) + i` (modulo table size)
- Supports insertion and deletion
- Simple probing-based collision resolution
- Uses tombstones (`-2`) to indicate deleted entries

---

## Functions

### `int HashInsertion(int key)`
Inserts a key into the hash table using linear probing.  
- Returns the index where the key was inserted.  
- Returns `-1` if the table is full.

### `int HashDeletion(int key)`
Deletes a key from the hash table using linear probing.  
- Returns the index where the key was found and deleted.  
- Returns `-1` if the key is not found.

---

## 🛠️ screenshot

<img width="1512" alt="Screenshot 2025-04-07 at 12 06 31 PM" src="https://github.com/user-attachments/assets/75959022-6172-4711-9e3b-a4f51690c5c7" />
<img width="360" alt="Screenshot 2025-04-07 at 12 06 39 PM" src="https://github.com/user-attachments/assets/bc12fedc-b65c-487c-9b7e-7772b1aac2f4" />

