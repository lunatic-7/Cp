#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

vector<vector<int>> threeSum(vector<int>& nums) {
    
    vector<vector<int>> trip;

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0) break;

        // Tp avoid Duplicate
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int j = i + 1, k = nums.size() - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum > 0) k--;
            else if (sum < 0) j++;
            else
            {
                trip.PB({nums[i], nums[j], nums[k]});
                j++;
                k--;

                // To avoid Duplicate
                while (j < k && nums[j] == nums[j - 1]) j++;
            }
        }
    }

    return trip;
}

int main()
{
    wasif();
    vector<int> nums = {-1, 0, 1, 2, -1, 4};

    vector<vector<int>> ans = threeSum(nums);

    for (auto &x : ans)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << "\n";
    }
    
    return 0;
}