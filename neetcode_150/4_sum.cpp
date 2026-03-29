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


vector<vector<int>> fourSum(vector<int>& nums, int target) {
    
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;
    set<vector<int>> pv_ml;

    for (int i = 0; i < nums.size(); ++i)
    {
    	for (int j = i + 1; j < nums.size(); ++j)
    	{	
	    	int l = j + 1, r = nums.size() - 1;
	    	while (l < r)
		    {
		    	ll sum = nums[i] + nums[j] *1LL + nums[l] + nums[r];
		    	cout << sum << "\n";

		    	if (target - sum > 0) l++;
		    	else if (target - sum < 0) r--;
		    	else
		    	{
		    		pv_ml.insert({nums[l], nums[r], nums[i], nums[j]});
		    		l++;
		    		r--;
		    	}
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
    vector<int> nums = {1000000000, 1000000000, 1000000000, 1000000000};
    int target = -294967296;
    vector<vector<int>> ans = fourSum(nums, target);

    for (auto &x : ans)
    {
    	showVect(x);
    }

    return 0;
}