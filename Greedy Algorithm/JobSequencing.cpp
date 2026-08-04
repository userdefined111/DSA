#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}  

int main()
{
    vector<pair<int, int>> jobs = {{4, 20}, {1, 10}, {1, 40}, {1, 30}};
    sort(jobs.begin(), jobs.end(), compare);
    int n = jobs.size();
    int res = jobs[0].second;
    int safe = 2;
    for (int i = 1; i < n; i++)
    {
        if (jobs[i].first >= safe)
        {
            res += jobs[i].second;
            safe++;
        }
    }
    cout << res << endl;
}