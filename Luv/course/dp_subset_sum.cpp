#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

/////////////////////// QUESTION //////////////////////////

// Given an integer array nums, return true if you can partition the array into two subsets,
// such that the sum of the elements in both subsets is equal or false otherwise.

// Example 1:

// Input: nums = [1,5,11,5]
// Output: true
// Explanation: The array can be partitioned as [1, 5, 5] and [11].

// Constraints:

// 1 <= nums.length <= 200
// 1 <= nums[i] <= 100

vector<int> nums;
int dp[205][20005];

bool func(int i, int sum)
{
    if (sum == 0) return 1;
    if (i < 0) return 0;
    if (dp[i][sum] != -1) return dp[i][sum];

    // Not consider ith index
    int isPossible = func(i - 1, sum);
    // Consider ith index
    if (sum - nums[i] >= 0) isPossible |= func(i - 1, sum - nums[i]);
    return dp[i][sum] = isPossible;
}

bool canPartition()
{
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum & 1) return false;  // Odd
    sum = sum / 2;
    return func(nums.size() - 1, sum);
}

int main()
{
    wasif();
    memset(dp, -1, sizeof(dp));
    nums = {1, 5, 11, 5};
    cout << canPartition() << "\n";
    
    return 0;
}