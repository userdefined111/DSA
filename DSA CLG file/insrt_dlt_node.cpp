#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at end (easy to understand)
void insert(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Go to last node
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Delete a node by value
void deleteNode(Node* &head, int value) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    // If first node needs to be deleted
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    // Find node before the one to delete
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    // If value not found
    if (temp->next == NULL) {
        cout << "Value not found\n";
        return;
    }

    // Delete node
    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

// Display list
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    Node* head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);

    cout << "List: ";
    display(head);

    deleteNode(head, 20);

    cout << "After deletion: ";
    display(head);

    return 0;
}

