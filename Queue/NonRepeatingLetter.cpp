#include <bits/stdc++.h>
using namespace std;

void repeatedChar(string str)
{
    int freq[26] = {0};
    queue<char> q;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        q.push(ch);
        freq[ch - 'a']++;

        while (!q.empty() && freq[q.front() - 'a'] > 1)
        {
            q.pop();
        }
        if (!q.empty())
        {
            cout << q.front() << "\n";
        }
        else
        {
            cout << "-1" << "\n";
        }
    }
}

int main()
{
    string str = "aabbcc";
    repeatedChar(str);
    return 0;
}