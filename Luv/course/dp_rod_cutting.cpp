#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

//////////////// Question ////////////////////
// Given a rod of length N inches and an array of prices, price[]. price[i] denotes the value of a piece of length i. 
// Determine the maximum value obtainable by cutting up the rod and selling the pieces.

// Note: Consider 1-based indexing.

// Input:
// N = 8
// Price[] = {1, 5, 8, 9, 10, 17, 17, 20}
// Output:
// 22
// Explanation:
// The maximum obtainable value is 22 by 
// cutting in two pieces of lengths 2 and 
// 6, i.e., 5+17=22.

// Constraints:
// 1 ≤ N ≤ 1000
// 1 ≤ Ai ≤ 10^5

vector<int> prices;
int dp[1005];

int func(int len)
{
    if (len == 0) return 0;
    if (dp[len] != -1) return dp[len];
    
    int ans = 0;
    for (int len_to_cut = 1; len_to_cut < prices.size(); len_to_cut++)
    {
        if (len - len_to_cut >= 0)
        {
            ans = max(ans, func(len - len_to_cut) + prices[len_to_cut - 1]);
        }
    }
    return dp[len] = ans;
}

int main()
{
    wasif();
    memset(dp, -1, sizeof(dp));
    int n = 8;
    prices = {1, 5, 8, 9, 10, 17, 17, 20};
    cout << func(n) << "\n";
    
    return 0;
}