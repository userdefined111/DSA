#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int amount = 93;
    int result = 0;

    for (int i = coins.size() - 1; i >= 0 && amount > 0; i--)
    {
        if (amount >= coins[i])
        {
            result += amount / coins[i];
            amount = amount % coins[i];
        }
    }
    cout << result << endl;
}