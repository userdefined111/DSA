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

void pushatbottom(stack<int>& s4, int val){
    if(s4.empty()){
        s4.push(val);
        return;
    }
    int temp =s4.top();
    s4.pop();
    pushatbottom(s4, val);
    s4.push(temp);
}

void ReverseString(string str){
    string ans;
    stack<char> s5;
    
    for(int i=0; i<str.size(); i++){
        s5.push(str[i]);
    }
    while(!s5.empty()){
        char top=s5.top();
        ans+=top;
        s5.pop();
    }
    cout<<ans<<"\n";
}

void ReverseStack(stack<int>& s6){
    stack<int> temp;
    while(!s6.empty()){
        int top=s6.top();
        temp.push(top);
        s6.pop();
    }
    s6=temp; 
}

int main(){
    cout<<"stack of template class: \n";
    NStack<char> s1;

    s1.push('c');
    s1.push('b');
    s1.push('a');
    while(!s1.isEmpty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<"\n";

    cout<<"stack of class: \n";
    Stack s2;

    s2.push(3);
    s2.push(2);
    s2.push(1);
    while(!s2.isEmpty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<"\n";

    cout<<"stack of STL: \n";
    stack<int> s3;
    s3.push(3); 
    s3.push(2);
    s3.push(1);
    while(!s3.empty()){
        cout<<s3.top()<<" ";
        s3.pop();
    }
    cout<<"\n";

    cout<<"push at bottom of stack: \n";
    stack<int> s4;
    s4.push(1);
    s4.push(2);
    s4.push(3);
    pushatbottom(s4, 11);
    while(!s4.empty()){
        cout<<s4.top()<<" ";
        s4.pop();
    }
    cout<<"\n";

    cout<<"reverse string using stack: \n";
    string str="Ambulance";
    ReverseString(str);

    cout<<"reverse stack using stack: \n";
    stack<int> s6;
    s6.push(1);
    s6.push(2);
    s6.push(3);
    ReverseStack(s6);
    while(!s6.empty()){
        cout<<s6.top()<<" ";
        s6.pop();
    }
    cout<<"\n";

    return 0;
}