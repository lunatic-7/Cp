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
 

bool to_find(vector<int>& nums, int k, int left, int right)
{
	for (int i = left; i <= right; ++i)
	{
		if (nums[i] == k) return 1;
	}
	return 0;
}

vector<vector<int>> threeSum(vector<int>& nums) {
    
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;
    set<vector<int>> pv_ml;

    for (int i = 0; i < nums.size(); ++i)
    {
    	if (nums[i] > 0) break;
    	
    	int l = i + 1, r = nums.size() - 1;
    	while (l < r)
	    {
	    	int sum = nums[i] + nums[l] + nums[r];
	    	if (sum > 0) r--;
	    	else if (sum < 0) l++;
	    	else
	    	{
	    		pv_ml.insert({nums[l], nums[r], nums[i]});
	    		l++;
	    		r--;
	    	}
	    }
    }
    
    for (auto &x: pv_ml)
    {
    	ans.PB(x);
    }

    return ans;
}

int main()
{
    wasif();
    vector<int> nums = {0, 0, 0, 0};
    vector<vector<int>> ans = threeSum(nums);

    for (auto &x : ans)
    {
    	showVect(x);
    }

    return 0;
}