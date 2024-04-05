#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    Node *nextNode;
};

Node *moveFirst2Last(Node *head) {
    if (head == nullptr || head->nextNode == nullptr) {
        return head;
    }

    Node *firstNode = head;
    Node *secondNode = head->nextNode;

    while (head->nextNode != nullptr) {
        head = head->nextNode;
    }

    head->nextNode = firstNode;
    firstNode->nextNode = nullptr;

    return secondNode;
}

int main() {
    return 0;
}
