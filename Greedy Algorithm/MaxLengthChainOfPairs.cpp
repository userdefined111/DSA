#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

int main()
{
    vector<pair<int, int>> pairs = {{5, 24}, {39, 60}, {5, 28}, {27, 40}, {50, 90}};
    sort(pairs.begin(), pairs.end(), compare);

    int chainLength = 1;
    int currend = pairs[0].second;

    for (int i = 1; i < pairs.size(); i++)
    {
        if (pairs[i].first > currend)
        {
            chainLength++;
            currend = pairs[i].second;
        }
    }
    cout << "Maximum length of chain of pairs: " << chainLength << endl;
}