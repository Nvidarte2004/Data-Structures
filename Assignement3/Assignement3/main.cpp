#include <iostream>
#include <stack>

using namespace std;

// Function to push an element onto the stack
int push(int T, stack<int>& s) {
    s.push(T);
    return T; // Return the pushed element
}

// Function to return and remove the top element from the stack
int topAndPop(stack<int>& s) {
    if (s.empty()) {
        cerr << "Error: Stack is empty!" << endl;
        return -1; // Return an error value
    }
    int topElement = s.top();
    s.pop();
    return topElement;
}

int main() {
    stack<int> myStack;
    
    // Pushing elements
    cout << "Pushed: " << push(10, myStack) << endl;
    cout << "Pushed: " << push(20, myStack) << endl;
    cout << "Pushed: " << push(30, myStack) << endl;
    
    // Popping elements
    cout << "Top and Popped: " << topAndPop(myStack) << endl;
    cout << "Top and Popped: " << topAndPop(myStack) << endl;
    cout << "Top and Popped: " << topAndPop(myStack) << endl;
    cout << "Top and Popped: " << topAndPop(myStack) << endl; // This will show an error
    
    return 0;
}
