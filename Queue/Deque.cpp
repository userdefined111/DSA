#include <bits/stdc++.h>
using namespace std;
// push_back() - adds an element to the back of the deque
// pop_back() - removes an element from the back of the deque
// push_front() - adds an element to the front of the deque
// pop_front() - removes an element from the front of the deque
// front() - returns the first element of the deque
// back() - returns the last element of the deque

int main()
{
    deque<int> dq;

    dq.push_front(2);
    dq.push_front(1);
    dq.push_back(3);
    dq.push_back(4);
    // 1 2 3 4
    dq.pop_front();
    dq.pop_back();
    // 2 3
    cout << dq.front() << " " << dq.back() << endl;
}