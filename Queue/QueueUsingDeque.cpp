#include <bits/stdc++.h>
using namespace std;
class Queue
{
    deque<int> dq;

public:
    void push(int x)
    {
        dq.push_back(x);
    }

    void pop()
    {
        dq.pop_front();
    }

    int front()
    {
        return dq.front();
    }

    bool empty()
    {
        return dq.empty();
    }
};

int main()
{
    Queue q;
    for (int i = 1; i <= 10; i++)
    {
        q.push(i);
    }
    for (int i = 1; i <= 5; i++)
    {
        cout << q.front() << endl;
        q.pop();
    }
}