//
//  main.cpp
//  assignment 7
//
//  Created by natalie vidarte on 4/9/25.
//

#include <iostream>
using namespace std;

// Define the TreeNode structure
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Insert a node into the BST
TreeNode* InsertBST(int x, TreeNode* T) {
    if (T == nullptr) {
        return new TreeNode(x);
    }
    if (x < T->data) {
        T->left = InsertBST(x, T->left);
    } else if (x > T->data) {
        T->right = InsertBST(x, T->right);
    }
    return T;
}

// Find the minimum node in the BST
TreeNode* FindMin(TreeNode* T) {
    while (T && T->left != nullptr) {
        T = T->left;
    }
    return T;
}

// Delete a node from the BST
TreeNode* DeleteBST(int x, TreeNode* T) {
    if (T == nullptr) return nullptr;

    if (x < T->data) {
        T->left = DeleteBST(x, T->left);
    } else if (x > T->data) {
        T->right = DeleteBST(x, T->right);
    } else {
        // Node found
        if (T->left && T->right) {
            TreeNode* temp = FindMin(T->right);
            T->data = temp->data;
            T->right = DeleteBST(temp->data, T->right);
        } else {
            TreeNode* temp = T;
            T = (T->left != nullptr) ? T->left : T->right;
            delete temp;
        }
    }
    return T;
}

// In-order traversal (for displaying the BST)
void InOrder(TreeNode* T) {
    if (T != nullptr) {
        InOrder(T->left);
        cout << T->data << " ";
        InOrder(T->right);
    }
}

// Main function to demonstrate insertion and deletion
int main() {
    TreeNode* root = nullptr;

    // Insert elements into the BST
    root = InsertBST(50, root);
    root = InsertBST(30, root);
    root = InsertBST(70, root);
    root = InsertBST(20, root);
    root = InsertBST(40, root);
    root = InsertBST(60, root);
    root = InsertBST(80, root);

    cout << "In-order traversal before deletion: ";
    InOrder(root);
    cout << endl;

    // Delete a node
    root = DeleteBST(50, root);

    cout << "In-order traversal after deleting 50: ";
    InOrder(root);
    cout << endl;

    return 0;
}
