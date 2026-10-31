#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
 

class Solution {

public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        // Only sliding window
        int l = 0, r = 0;
        int total = 0, ans = INT_MAX;

        while (r < nums.size())
        {
        	total += nums[r];
        	while (total >= target)
        	{
        		ans = min(r - l + 1, ans);
        		total -= nums[l];
        		l++;
        	}
        	r++;
        }

        return (ans == INT_MAX ? 0 : ans);
    }
};


int main()
{
    wasif();

    Solution sol;

    int target = 10;
    vector<int> nums = {2, 1, 5, 1, 5, 3};

    cout << sol.minSubArrayLen(target, nums) << "\n";

    return 0;
}