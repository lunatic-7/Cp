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
 

bool containsNearbyDuplicate(vector<int>& nums, int k) 
{
	unordered_set<int> rmdup;

	int sz = nums.size();
	for (int i = 0; i <= min(k, sz - 1); ++i)
    {
    	rmdup.insert(nums[i]);	
    }    

    if (rmdup.size() <= k) return true;


    for (int i = k + 1; i < nums.size(); ++i)
    {
    	rmdup.erase(nums[i - k - 1]);
    	rmdup.insert(nums[i]);

    	if (rmdup.size() <= k) return true;
    }

    return false;
}

int main()
{
    wasif();
    
    vector<int> nums = {99, 99};
    int k = 4;
    cout << containsNearbyDuplicate(nums, k) << "\n";

    return 0;
}