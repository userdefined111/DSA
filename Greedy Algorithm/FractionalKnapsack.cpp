#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> value = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int capacity = 50;
    vector<int> ratio(3, 0);

    for (int i = 0; i < 3; i++)
    {
        ratio[i] = value[i] / weight[i];
    }
    sort(ratio.begin(), ratio.end(), greater<int>());

    int maxvalue = 0;

    for (int i = 0; i < 3; i++)
    {
        if (capacity >= weight[i])
        {
            maxvalue += value[i];
            capacity -= weight[i];
        }
        else
        {
            maxvalue += ratio[i] * capacity;
            capacity = 0;
        }
    }
    cout << maxvalue << endl;
}