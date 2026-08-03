#include <bits/stdc++.h>
using namespace std;

void interleaveQueues(queue<int> &q1){
    int n=q1.size();
    queue<int>first;

    for(int i=0;i<n/2;i++){
        first.push(q1.front());
        q1.pop();
    }
    while(!first.empty()){
        q1.push(first.front());
        first.pop();
        q1.push(q1.front());
        q1.pop();
    }
}

int main (){
    queue<int> q1;
    for(int i = 1; i <= 10; i++){
        q1.push(i);
    }
    interleaveQueues(q1);

    for(int i = 1; i <= 10; i++){
        cout << q1.front() << " ";
        q1.pop();
    }
}