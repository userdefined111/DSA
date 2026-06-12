#include <bits/stdc++.h>
using namespace std;

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

Node* split(Node* head);
Node* merge(Node* left, Node* right);
Node* mergeSort(Node* head);
Node* zigzagLL(Node* head);
Node* reverseLL(Node* head);

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

Node* zigzagLL(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node* righthead= split(head);
    Node* rightheadrev  = reverseLL(righthead);

    Node* left = head;
    Node* right = rightheadrev;
    Node* tail=right;

    while(left!=NULL && right!=NULL){
        Node* nextleft= left->next;
        Node* nextright= right->next;

        left->next= right;
        if(nextleft==NULL){
            break;
        }

        right->next= nextleft;
        left= nextleft;
        right= nextright;
    }
    return head;
}

Node* reverseLL(Node* head){
    Node* prev =NULL;
    Node* curr =head;
    Node*next =NULL;

    while(curr!=NULL){
        next= curr->next;
        curr->next =prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

class Node{
    public:
    int data;
    Node* next;
    Node*prev;

    Node(int val){
        data=val;
        next=prev=NULL;
    }
};
class DoublyList{
    public:
    Node* head;
    Node* tail;

    DoublyList(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode =new Node(val);
        
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }    

    void printList(){
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->data<<"<=> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};



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

    DoublyList dl;
    dl.push_front(1);
    dl.push_front(2);
    dl.push_front(3);
    dl.push_front(4);
    dl.push_front(5);
    dl.printList();
    return 0;
}