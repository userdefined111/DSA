#include <bits/stdc++.h>
using namespace std;

// implementing Queue using linked list
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        head=tail=NULL;
        
    }

    void Push(int data){
        Node* newNode=new Node(data);
        if(tail==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void Pop(){
        if (Empty()){
            cout<<"Queue is empty.\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
        if(head==NULL){
            tail=NULL;
        }

    }

    int Front(){
        if (Empty()){
            cout<<"Queue is empty.\n";
            return -1;
        }
        return head->data;
    }

    bool Empty(){
        return head==NULL;
    }

};

// implementing Queue using Array
    

int main(){
    Queue q;
    q.Push(1);
    q.Push(2);
    q.Push(3);
    while(!q.Empty()){
        cout<<q.Front()<<"\n";
        q.Pop();
    }
    return 0;
}