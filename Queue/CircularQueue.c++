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
    class Queue1{
        int* arr;

        int capacity;
        int currentSize;

        int f, r;
    public:
        Queue1(int capacity){
            this->capacity=capacity;
            arr=new int[capacity];
            currentSize=0;
            f=0;
            r=-1;            
        }
        void Push(int data){ //O(1)
            if(currentSize==capacity){
                cout<<"Queue is full.\n";
                return;
            }
            r = (r + 1) % capacity;            
            arr[r]=data;
            currentSize++;
        }

        void Pop(){ //O(1)
            if(Empty()){
                cout<<"Queue is EMPTY.\n";
                return;
            }
            f=(f+1)%capacity;
            currentSize--;
            if(currentSize==0){
                f=0;
                r=-1;
            }
        }
        
        int Front(){ //O(1)
            if(Empty()){
                cout<<"Queue is EMPTY.\n";
                return -1;
            }
            return arr[f];

        }

        bool Empty(){
            return currentSize==0;
        }
    };

int main(){
    cout<<"Circular Queue Implementation using Linked List:-\n";
    Queue q;
    q.Push(1);
    q.Push(2);
    q.Push(3);
    while(!q.Empty()){
        cout<<q.Front()<<"\n";
        q.Pop();
    }
    cout<<"Circular Queue Implementation using array:-\n";
    Queue1 q1(4);
    q1.Push(1);
    q1.Push(2);
    q1.Push(3);
    q1.Push(4);
    while(!q1.Empty()){
        cout<<q1.Front()<<"\n";
        q1.Pop();
    }

    return 0;
} 