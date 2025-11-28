     #assignment10-q5
#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool hasLoop(Node* head) {
    unordered_set<Node*> visited;

    Node* curr = head;
    while (curr != nullptr) {
        if (visited.count(curr))
            return true;

        visited.insert(curr);
        curr = curr->next;
    }

    return false; 
}

int main() {
    Node* n1 = new Node{1, nullptr};
    Node* n2 = new Node{2, nullptr};
    Node* n3 = new Node{3, nullptr};
    Node* n4 = new Node{4, nullptr};

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n2;

    if (hasLoop(n1))
        cout << "true";
    else
        cout << "false";

    return 0;
}
