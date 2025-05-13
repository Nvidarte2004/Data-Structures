### Graph Traversal in C++
This repository contains a simple implementation of Breadth First Traversal (BFS) and Depth First Traversal (DFS) using C++. It uses an adjacency list representation for an undirected graph.

### Features:
Graph represented using an adjacency list
Breadth First Traversal (Level-order traversal)
Depth First Traversal (Pre-order traversal with backtracking)
Clean, modular C++ code
Example usage included in main()
Algorithms Used:

### Breadth First Traversal (BFS)
Choose a Vertex
Mark it as visited
Enqueue it to the Queue
While Queue not empty:
variable = dequeue()
Enqueue all unvisited adjacent vertex of variable to Queue and mark them as visited
End While

### Depth First Traversal (DFS)
Choose a Vertex
Mark it as visited
Push to the Stack
While Stack not empty:
variable = get top of stack()
if there is an unvisited adjacent vertex of variable:
mark it as visited
push it to Stack
else:
pop()
End While

### How to Run:

Clone this repository:
git clone https://github.com/your-username/graph-traversal-cpp.git
cd graph-traversal-cpp
Compile the code using g++:
g++ -o graph main.cpp
Run the executable:
./graph
### Sample Graph Used:
 0
/ \
1 2
/ \ \
3 4 5
### Sample Output:
Breadth First Traversal starting from vertex 0: 0 1 2 3 4 5
Depth First Traversal starting from vertex 0: 0 1 3 4 2 5

### File Structure:
graph-traversal-cpp/
main.cpp // Contains Graph class and main method
README.txt // This file

### Screenshot output:
<img width="551" alt="Screenshot 2025-05-12 at 10 04 07 PM" src="https://github.com/user-attachments/assets/ab3994c8-0daa-4acc-b44c-f70e12f36c7c" />





