#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 25e2+10;
vector<int> a(N);
int dp[N];

// Longest increasing subsequence
// eg: We have this array: 10 9 2 5 3 7 101 18
// 2 3 7 18  (This is an increasing subsequence)
// 3 5 7 18  (This is not an increasing subsequence beacause order matters)
// In subsequence; order should be same, as in original array 3 comes after 5, the same should be in subsequence array 

// Computing length of longest increasing subsequence
int lis(int i)
{
    if (dp[i] != -1) return dp[i];
    int ans = 1;
    for (int j = 0; j < i; j++)
    {
        if (a[i] > a[j])
        {
            ans = max(ans, lis(j) + 1);
        }
    }
    return dp[i] = ans;
}
// T.C before DP = O(n * 2^n)
// T.C after DP = O(n^2)

int main()
{
    wasif();
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    // Taking input array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int ans = 0;
    // Running for all the numbers of array (assuming them to be last no of longest increasing subsequence)
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, lis(i));
    }

    cout << ans << "\n";
    
    return 0;
}