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

int main()
{
    wasif();
    vector<ll> nums = {1,2};  // 3 2 1 4

    // Next perm nikal
    int key = 0;
    for (int i = nums.size() - 1; i > 0; --i)
    {
    	int j = i - 1;
    	if (nums[j] < nums[i])
    	{
    		key = j;
    		break;
    	}
    }

    int key2 = 0;
    for (int i = key + 1; i < nums.size(); ++i)
    {
    	int diff = INT_MAX;
    	if (nums[key] < nums[i])
    	{
    		if (nums[i] - nums[key] < diff)
    		{
    			diff = nums[i] - nums[key];
    			key2 = i;
    		}
    	}
    }

    swap(nums[key], nums[key2]);
    if (key2 != 0) reverse(nums.begin() + key + 1, nums.end());
    else reverse(nums.begin() + key, nums.end());

    showVect(nums);
    return 0;
}