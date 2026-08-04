#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {4, 1, 8, 7};
    vector<int> b = {4, 3, 6, 5};
    int minDiff = INT_MAX;
    for (int i = 0; i < a.size(); i++)
    {
        minDiff = min(minDiff, abs(a[i] - b[i]));
    }
    cout << "Minimum absolute difference at same index: " << minDiff << endl;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int absdiff = 0;
    for (int i = 0; i < a.size(); i++)
    {
        absdiff += abs(a[i] - b[i]);
    }
    cout << "Minimum Sum of absolute differences (after optimal pairing): " << absdiff << endl;
}