//
//  main.cpp
//  assignment 8
//
//  Created by natalie vidarte on 4/15/25.
//
#include <iostream>
#include <algorithm>
using namespace std;

struct Treenode {
    int key;
    Treenode* left;
    Treenode* right;
    int height;
    
    Treenode(int val) {
        key = val;
        left = right = nullptr;
        height = 1;
    }
};

int getHeight(Treenode* node) {
    if (node == nullptr) return 0;
    return node->height;
}

int updateHeight(Treenode* node) {
    return 1 + max(getHeight(node->left), getHeight(node->right));
}

Treenode* leftrotation(Treenode* node) {
    Treenode* newRoot = node->right;
    Treenode* temp = newRoot->left;

    newRoot->left = node;
    node->right = temp;

    node->height = updateHeight(node);
    newRoot->height = updateHeight(newRoot);

    return newRoot;
}

Treenode* Rightrotation(Treenode* node) {
    Treenode* newRoot = node->left;
    Treenode* temp = newRoot->right;

    newRoot->right = node;
    node->left = temp;

    node->height = updateHeight(node);
    newRoot->height = updateHeight(newRoot);

    return newRoot;
}

// In-order traversal to verify result
void inorder(Treenode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

//  Test rotations
int main() {
    // Create a simple unbalanced tree
    Treenode* root = new Treenode(10);
    root->right = new Treenode(20);
    root->right->right = new Treenode(30);

    cout << "Before left rotation: ";
    inorder(root); // Output: 10 20 30
    cout << endl;

    root = leftrotation(root);

    cout << "After left rotation: ";
    inorder(root); // Output: 10 20 30 but now balanced
    cout << endl;

    return 0;
}
