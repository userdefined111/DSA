#include <bits/stdc++.h>
using namespace std;

// Linked List Implementation using class
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void InsertMiddle(int value, int pos)
    {
        Node *newNode = new Node(value);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position out of bounds\n";
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void srch(int key)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Element found at index: " << idx << "\n";
                return;
            }
            temp = temp->next;
            idx++;
        }
        cout << "Element not found\n";
    }

    void reverse()
    {
        Node *prev = NULL;
        Node *current = head;
        Node *next = NULL;

        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void nthNodeFromEnd(int n)
    {
        Node *newNode = head;
        newNode = head;
        for (int i = 0; i < n; i++)
        {
            if (newNode == NULL)
            {
                cout << "Position out of bounds\n";
                return;
            }
            newNode = newNode->next;
        }
        cout << "The " << n << "th node from the end is: " << newNode->data << "\n";
    }
};

int main()
{
    List ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);
    ll.print();
    // 10->20->30

    ll.push_back(40);
    ll.push_back(50);
    ll.print();
    // 10->20->30->40->50

    ll.InsertMiddle(25, 2);
    ll.print();
    // 10->20->25->30->40->50

    ll.srch(25);
    // Element found at index: 2

    ll.reverse();
    ll.print();
    // 50->40->30->25->20->10

    ll.pop_front();
    ll.print();
    // 40->30->25->20->10

    ll.pop_back();
    ll.print();
    // 20->25->30->40

    ll.nthNodeFromEnd(2);
    // 30

    delete &ll;
    ll.print();
    // NULL

    return 0;
}