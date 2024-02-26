#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

/////////////////////////////////////// Question ///////////////////////////////////////////
// There are N items, numbered 1,2,…,N. For each i (1≤i≤N), Item i has a weight of wi and a value of vi.

// Taro has decided to choose some of the N items and carry them home in a knapsack. The capacity of the knapsack is 
// W, which means that the sum of the weights of items taken must be at most W.

// Find the maximum possible sum of the values of items that Taro takes home.

// Input Format
// N W
// w1 v1
// w2 v2
// .  .
// .  .
// .  .
// wN vN

int wt[105], val[105];
ll dp[105][100005];

ll func(int ind, int wt_left)
{
    // Base cases
    if (wt_left == 0) return 0;
    if (ind < 0) return 0;
    if (dp[ind][wt_left] != -1) return dp[ind][wt_left];

    // Don't choose item at ind index
    ll ans = func(ind - 1, wt_left);
    // Choose item at ind index
    if (wt_left - wt[ind] >= 0) ans = max(ans, func(ind - 1, wt_left - wt[ind]) + val[ind]);
    return dp[ind][wt_left] = ans;
}

int main()
{
    wasif();
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    cout << func(n - 1, w) << "\n";
    
    return 0;
}