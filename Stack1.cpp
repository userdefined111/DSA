#include <bits/stdc++.h>
using namespace std;

// class Stack{
//     vector<int>vec;
// public:
//     void push(int val){
//         vec.push_back(val);
//     }
//     void pop(){
//         if(isEmpty()){
//             cout<<"stack is empty.\n";
//             return;
//         }
//         vec.pop_back();
//     }
//     int top(){
//         int lastIdx= vec.size()-1;
//         return vec[lastIdx];
//     }
//     bool isEmpty(){
//         return vec.size()==0;
//     }
// };

template<class T>
class Stack{
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

// int main(){
//     Stack s;
//     s.push(3);
//     s.push(2);
//     s.push(1);
//     while(!s.isEmpty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }

int main(){
    Stack<char> s;
    s.push('c');
    s.push('b');
    s.push('a');
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}