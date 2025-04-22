//
//  main.cpp
//  assignment 9
//
//  Created by natalie vidarte on 4/20/25.
//

#include <iostream>
using namespace std;

// Minimum degree (defines the range for number of keys)
const int T = 3;

class BTreeNode {
public:
    int *keys;              // Array of keys
    int t;                  // Minimum degree
    BTreeNode **children;   // Array of child pointers
    int n;                  // Current number of keys
    bool leaf;              // Is true when node is leaf

    BTreeNode(bool leaf);

    void insertNonFull(int k);
    void splitChild(int i, BTreeNode *y);
    void traverse();

    friend class BTree;
};

class BTree {
    BTreeNode *root;
public:
    BTree() {
        root = nullptr;
    }

    void insert(int k);
    void traverse() {
        if (root != nullptr)
            root->traverse();
    }
};

// BTreeNode constructor
BTreeNode::BTreeNode(bool leaf) {
    this->t = T;
    this->leaf = leaf;
    keys = new int[2 * t - 1];
    children = new BTreeNode*[2 * t];
    n = 0;
}

// Traverse the tree
void BTreeNode::traverse() {
    int i;
    for (i = 0; i < n; i++) {
        if (!leaf)
            children[i]->traverse();
        cout << keys[i] << " ";
    }
    if (!leaf)
        children[i]->traverse();
}

// Insert a new key in the B-Tree
void BTree::insert(int k) {
    if (root == nullptr) {
        root = new BTreeNode(true);
        root->keys[0] = k;
        root->n = 1;
    } else {
        if (root->n == 2 * T - 1) {
            BTreeNode *s = new BTreeNode(false);
            s->children[0] = root;
            s->splitChild(0, root);
            int i = 0;
            if (s->keys[0] < k)
                i++;
            s->children[i]->insertNonFull(k);
            root = s;
        } else {
            root->insertNonFull(k);
        }
    }
}

// Insert a key into a non-full node
void BTreeNode::insertNonFull(int k) {
    int i = n - 1;

    if (leaf) {
        while (i >= 0 && keys[i] > k) {
            keys[i + 1] = keys[i];
            i--;
        }
        keys[i + 1] = k;
        n++;
    } else {
        while (i >= 0 && keys[i] > k)
            i--;
        i++;
        if (children[i]->n == 2 * t - 1) {
            splitChild(i, children[i]);
            if (keys[i] < k)
                i++;
        }
        children[i]->insertNonFull(k);
    }
}

// Split the child y of this node at index i
void BTreeNode::splitChild(int i, BTreeNode *y) {
    BTreeNode *z = new BTreeNode(y->leaf);
    z->n = t - 1;

    for (int j = 0; j < t - 1; j++)
        z->keys[j] = y->keys[j + t];

    if (!y->leaf) {
        for (int j = 0; j < t; j++)
            z->children[j] = y->children[j + t];
    }

    y->n = t - 1;

    for (int j = n; j >= i + 1; j--)
        children[j + 1] = children[j];

    children[i + 1] = z;

    for (int j = n - 1; j >= i; j--)
        keys[j + 1] = keys[j];

    keys[i] = y->keys[t - 1];
    n++;
}

// ---------------- Main ----------------

int main() {
    BTree tree;

    int keys[] = {10, 20, 5, 6, 12, 30, 7, 17};
    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; i++) {
        tree.insert(keys[i]);
    }

    cout << "Traversal of the constructed B-Tree:\n";
    tree.traverse();
    cout << endl;

    return 0;
}
