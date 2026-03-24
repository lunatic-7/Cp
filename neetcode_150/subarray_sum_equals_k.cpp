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


int subarraySumUpgraded(vector<int> &nums, int k)
{
	// Intuition: prefix_sum[j] - prefix_sum[i] == k

	int currSum = 0, res = 0;
	unordered_map<int, int> prefix_sum;
	prefix_sum[0] = 1;

	for (int i = 0; i < nums.size(); ++i)
	{
		currSum += nums[i];
		int diff = currSum - k;
		res += prefix_sum[diff];
		prefix_sum[currSum]++;
	}

	return res;
}


int subarraySum(vector<int>& nums, int k) {
    
    int ans = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
    	int sum = 0;
    	for (int j = i; j < nums.size(); ++j)
    	{
    		sum += nums[j];
    		if (sum == k) ans++;
    	}
    }

    return ans;
}


int main()
{
    wasif();
   	vector<int> nums = {2, -1, 1, 2};
   	int k = 2;

   	cout << subarraySumUpgraded(nums, k) << "\n";

    return 0;
}