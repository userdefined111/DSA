#include <bits/stdc++.h>
using namespace std;

void ActivitySelection(vector<int> start, vector<int> end)
{
    sort(end.begin(), end.end());
    int count = 1;
    int last_end = end[0];
    for (int i = 1; i < end.size(); i++)
    {
        if (start[i] >= last_end)
        {
            count++;
            last_end = end[i];
        }
    }
    cout << count << endl;
}

int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    ActivitySelection(start, end);
    return 0;
}