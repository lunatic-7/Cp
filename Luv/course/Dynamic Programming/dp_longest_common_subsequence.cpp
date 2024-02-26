#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

/////////////////// Question ////////////////////
// Given two strings text1 and text2, return the length of their longest common subsequence. 
// If there is no common subsequence, return 0.

// A subsequence of a string is a new string generated from the original string with some characters 
// (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".

// A common subsequence of two strings is a subsequence that is common to both strings.
// Input: text1 = "abcde", text2 = "ace" 
// Output: 3  
// Explanation: The longest common subsequence is "ace" and its length is 3.

// Constraints:
// 1 <= text1.length, text2.length <= 1000

string s1, s2;
int dp[1005][1005];

int lcs(int i, int j)
{
    if (i < 0 || j < 0) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    // Remove 1 char from s1
    int ans = lcs(i - 1, j);
    // Remove 1 char from s2
    ans = max(ans, lcs(i, j - 1));
    // Remove 1 char from s1 and s2
    ans = max(ans, lcs(i - 1, j - 1) + (s1[i] == s2[j]));
    return dp[i][j] = ans;
}

int main()
{
    wasif();
    memset(dp, -1, sizeof(dp));
    s1 = "abcde";
    s2 = "ace";
    int ans = lcs(s1.size() - 1, s2.size() - 1);
    cout << ans << "\n";
    
    return 0;
}