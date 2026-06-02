#include <bits/stdc++.h>
using namespace std;

// Linked List Implementation using class
class Node{
    public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }

};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int value){
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
        } 
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head== NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

    void InsertMiddle(int value){
        Node* newNode=new Node(value);
        
};

int main(){
    List ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);
    // 10->20->30
    ll.push_back(40);
    ll.push_back(50);
    // 10->20->30->40->50
    ll.print();
    return 0;
}