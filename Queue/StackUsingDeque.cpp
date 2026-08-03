#include <bits/stdc++.h>
using namespace std;

class Stack{
    deque<int> dq;
public:
    void push(int x){
        dq.push_front(x);//dq.push_back(x);//stack
    }

    void pop(){
        dq.pop_front();//dq.pop_back();//stack
    }

    void top(){
        cout << dq.front() << endl;
    }

    bool empty(){
        return dq.empty();
    }

};   

int main(){
    Stack s;
    for(int i = 1; i <= 10; i++){
        s.push(i);
    }
    for(int i = 1; i <= 5; i++){
        s.top();
        s.pop();
    }
}