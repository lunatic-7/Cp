#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

/////////////////////// Question ////////////////////////////

// You are given an integer array coins representing coins of different denominations 
// and an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. 
// If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin.

// Example 1:
// Input: coins = [1,2,5], amount = 11
// Output: 3
// Explanation: 11 = 5 + 5 + 1

// Example 2:
// Input: coins = [2], amount = 3
// Output: -1

// Example 3:
// Input: coins = [1], amount = 0
// Output: 0

const int N = 1e5+10;
vector<int> coins(N);
int dp[N];

int func (int amount)
{
    if (amount == 0) return 0;
    if (dp[amount] != -1) return dp[amount];

    int ans = INT_MAX;
    for (int coin : coins)
    {
        if (amount - coin >= 0)
        {
            ans = min(ans + 0LL, func(amount - coin) + 1LL);
        }
    }
    return dp[amount] = ans;
}

int main()
{
    wasif();

    coins = {1, 2, 5};
    int amount = 11;
    memset(dp, -1, sizeof(dp));
    int ans = func(amount);
    cout << (ans == INT_MAX ? -1 : ans) << "\n";
    
    return 0;
}