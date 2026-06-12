#include <bits/stdc++.h>
using namespace std;

// ================= SINGLY LINKED LIST =================

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }
};

// ================= PRINT FUNCTIONS =================

void printlist(list<int>& myList) {
    list<int>::iterator it;

    for (it = myList.begin(); it != myList.end(); it++) {
        cout << (*it) << "-> ";
    }

    cout << "NULL\n";
}

void printlist(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// ================= CYCLE REMOVE =================

void removeCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            isCycle = true;
            break;
        }
    }

    if (isCycle == false) {
        return;
    }

    slow = head;

    if (slow == fast) {
        while (fast->next != slow) {
            fast = fast->next;
        }

        fast->next = NULL;
    }
    else {
        Node* prev = NULL;

        while (slow != fast) {
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }

        prev->next = NULL;
    }
}

// ================= FUNCTION DECLARATIONS =================

Node* split(Node* head);
Node* merge(Node* left, Node* right);
Node* mergeSort(Node* head);
Node* zigzagLL(Node* head);
Node* reverseLL(Node* head);

// ================= MERGE SORT =================

Node* mergeSort(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* righthead = split(head);

    Node* left = mergeSort(head);
    Node* right = mergeSort(righthead);

    return merge(left, right);
}

Node* split(Node* head) {
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (prev != NULL) {
        prev->next = NULL;
    }

    return slow;
}

Node* merge(Node* left, Node* right) {
    List ans;

    Node* i = left;
    Node* j = right;

    while (i != NULL && j != NULL) {
        if (i->data <= j->data) {
            ans.push_back(i->data);
            i = i->next;
        }
        else {
            ans.push_back(j->data);
            j = j->next;
        }
    }

    while (i != NULL) {
        ans.push_back(i->data);
        i = i->next;
    }

    while (j != NULL) {
        ans.push_back(j->data);
        j = j->next;
    }

    return ans.head;
}

// ================= REVERSE LINKED LIST =================

Node* reverseLL(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

// ================= ZIGZAG LINKED LIST =================

Node* zigzagLL(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* righthead = split(head);
    Node* rightheadrev = reverseLL(righthead);

    Node* left = head;
    Node* right = rightheadrev;

    while (left != NULL && right != NULL) {
        Node* nextleft = left->next;
        Node* nextright = right->next;

        left->next = right;

        if (nextleft == NULL) {
            break;
        }

        right->next = nextleft;

        left = nextleft;
        right = nextright;
    }

    return head;
}

// ================= DOUBLY LINKED LIST =================

class DNode {
public:
    int data;
    DNode* next;
    DNode* prev;

    DNode(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
public:
    DNode* head;
    DNode* tail;

    DoublyList() {
        head = tail = NULL;
    }

    void push_Front(int val) {
        cout<<"Inserting at front: "<<val<<"\n";
        DNode* newNode = new DNode(val);

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    
    void pop_front(){
        if(head==NULL){
            cout<<"List is empty\n";
            return;
        }
        cout<<"Deleting front element: "<<head->data<<"\n";

        DNode* temp=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        else{
            tail=NULL;
        }
        temp->next=NULL;
        delete temp;
    }

    void printList() {
        DNode* temp = head;

        while (temp != NULL) {
            cout << temp->data << "<=> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

// ================= MAIN FUNCTION =================

int main() {
    list<int> myList;

    myList.push_back(1);
    myList.push_front(2);
    myList.push_back(3);
    myList.push_front(4);
    myList.push_back(5);

    cout << "STL list:\n";
    printlist(myList);

    myList.reverse();
    printlist(myList);

    myList.insert(next(myList.begin(), 2), 10);
    printlist(myList);

    cout << "Size of the list: " << myList.size() << "\n";
    cout << "Front element: " << myList.front() << "\n";
    cout << "Back element: " << myList.back() << "\n";

    myList.sort();
    printlist(myList);

    cout << "\nCustom linked list before merge sort:\n";

    List ans;

    ans.push_back(1);
    ans.push_front(2);
    ans.push_back(3);
    ans.push_front(4);
    ans.push_back(5);
    ans.push_back(10);

    printlist(ans.head);

    ans.head = mergeSort(ans.head);

    cout << "Custom linked list after merge sort:\n";
    printlist(ans.head);

    ans.head = zigzagLL(ans.head);

    cout << "Custom linked list after zigzag:\n";
    printlist(ans.head);

    cout << "\nDoubly linked list:\n";

    DoublyList dll;

    dll.push_Front(1);
    dll.push_Front(2);
    dll.push_Front(3);
    dll.push_Front(4);
    dll.push_Front(5);
    dll.printList(); // 5<=>4<=>3<=>2<=>1<=>NULL

    dll.pop_front();
    dll.printList();// 4<=>3<=>2<=>1<=>NULL

    return 0;
}