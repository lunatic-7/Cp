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
    vector<int> nums = {1,2,2,3,3,3};
    int k = 2;

    unordered_map<int, int> freq;

    for (int i = 0; i < nums.size(); ++i)
    {
    	freq[nums[i]]++;
    }

    vector<vector<int>> entry(nums.size() + 1);

    for (auto &x : freq)
    {
    	entry[x.S].PB(x.F);
    }

    vector<int> ans;

    for (int i = nums.size(); i <= 0; --i)
    {
    	for (auto &ent : entry[i])
    	{
    		ans.PB(ent);
    		if (ans.size() == k) return ans;
    	}
    }

    return ans;

    return 0;
}