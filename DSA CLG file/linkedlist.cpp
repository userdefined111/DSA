#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;         // Data part (e.g., an integer)
    Node* next;       // Pointer to the next node in the list
    Node(int val) : data(val), next(nullptr) {}
};

void displayList(Node* head) {
    Node* current = head;
    if (current == nullptr) {
        cout << "The list is empty." << std::endl;
        return;
    }
    cout << "Linked List elements: ";
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next; // Move to the next node
    }
    cout << "nullptr" << std::endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    displayList(head);
    return 0;
}