       #assignment10-q6
#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};
bool containsDuplicate(Node* root, unordered_set<int> &seen) {
    if (root == nullptr)
        return false;
    if (seen.count(root->data))
    seen.insert(root->data);
    return containsDuplicate(root->left, seen) ||
           containsDuplicate(root->right, seen);
}

int main() {
    Node* root = new Node{5, nullptr, nullptr};
    root->left = new Node{3, nullptr, nullptr};
    root->right = new Node{7, nullptr, nullptr};
    root->right->left = new Node{3, nullptr, nullptr};

    unordered_set<int> seen;

    if (containsDuplicate(root, seen))
        cout << "Duplicates Found";
    else
        cout << "No Duplicates";

    return 0;
}
