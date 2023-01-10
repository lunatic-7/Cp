#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Global vector to store vector of subsets
vector<vector<int>> subsets;

void generate(vector<int> &subset, int i, vector<int> &nums)
{
    // Base case
    if (i == nums.size())
    {
        subsets.PB(subset);
        return;
    }

    // ith element is not included in subset
    generate(subset, i + 1, nums);

    // ith element is included in subset
    subset.PB(nums[i]);
    generate(subset, i + 1, nums);
    // Backtracking
    subset.POB();
}

int main()
{
    wasif();
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> empty;
    generate(empty, 0, nums);

    for (auto &subset : subsets)
    {
        for (auto &ele : subset)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
    
    return 0;
}