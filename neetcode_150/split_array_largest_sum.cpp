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


bool chkSpl(vector<int>& hashnum, int subarray, int target)
{
	int sz = hashnum.size();
	int danda = 0;
	// int minimized_sum = hashnum[0];
	subarray--;  // 1 subarray to always hai

	for (int i = 1; i < sz; ++i)
	{
		if (hashnum[i] - hashnum[danda] > target)
		{
			if (subarray)
			{
				subarray--;
				danda = i - 1;
			}
			else return false;
		}
	}

	return true;
}

int splitArray(vector<int>& nums, int k) 
{
	int sz = nums.size();
	
	// Get Hashed array with 0th index as 0
	vector<int> hashnum(sz + 1, 0);
	for (int i = 1; i <= sz; ++i)
    {
    	hashnum[i] = hashnum[i - 1] + nums[i - 1];
    }    

    // Get maximum and sum of all numbers of array
    auto max_elem = max_element(nums.begin(), nums.end());
    int sum_all = accumulate(nums.begin(), nums.end(), 0);

    int left = *max_elem, right = sum_all;
    int ans = right;
    // Binary searching on ans, mid can be a probable ans, FFFFTTTT (We need to find the first T)
    while (left <= right)
    {
    	int mid = (left + right) / 2;

    	if (chkSpl(hashnum, k, mid))
    	{
    		ans = mid;
    		right = mid - 1;
    	}
    	else left = mid + 1;
    }

    return ans;
}


int main()
{
    wasif();
    vector<int> nums = {2, 4, 10, 1, 5};
    int k = 4;

    cout << splitArray(nums, k) << "\n";

    return 0;
}