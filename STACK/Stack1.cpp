#include <bits/stdc++.h>
using namespace std;

// create stack using vector
class Stack{
    vector<int>vec;
public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty.\n";
            return;
        }
        vec.pop_back();
    }
    int top(){
        int lastIdx= vec.size()-1;
        return vec[lastIdx];
    }
    bool isEmpty(){
        return vec.size()==0;
    }
};

// create stack using vector with template 
template<class T>
class NStack{
    vector<T>vec;
public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty.\n";
            return;
        }
        vec.pop_back();
    }
    T top(){
        int lastIdx= vec.size()-1;
        return vec[lastIdx];
    }
    bool isEmpty(){
        return vec.size()==0;
    }
};

int main(){
    NStack<char> s1;

    s1.push('c');
    s1.push('b');
    s1.push('a');
    while(!s1.isEmpty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<"\n";

    Stack s2;

    s2.push(3);
    s2.push(2);
    s2.push(1);
    while(!s2.isEmpty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    return 0;
}