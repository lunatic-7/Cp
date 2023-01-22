#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// We will return a vector of vector here
vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    int subset_ct = (1 << n);  // 2^n
    vector<vector<int>> gen_subset;  // We are going to return this subset
    for (int mask = 0; mask < subset_ct; mask++)
    {
        vector<int> subset;
        for (int i = 0; i < n; i++)
        {
            if ((mask & (1 << i)) != 0)
            {
                subset.PB(nums[i]);
            }
        }
        gen_subset.PB(subset);
    }

    return gen_subset;
}

int main()
{
    wasif();
    // Taking length of array
    int n;
    cin >> n;

    // Taking that array
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto all_subsets = subsets(v);

    for (auto subset : all_subsets)
    {
        for (int ele : subset)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
    
    return 0;
}