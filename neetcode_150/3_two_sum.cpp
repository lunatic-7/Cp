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
    vector<int> nums = {3, 4, 5, 6};
    // target - j = i

    int target = 7;

    map<int,int> mp;
    int k, w;

    for (int i = 0; i < nums.size(); ++i)
    {
    	int tochk = target - nums[i];
    	auto it = mp.find(tochk);

    	if (it != mp.end())
    	{
    		k = (*it).S;
    		w = i;
    	}
    	else mp[nums[i]] = i;
    }

    vector<int> ans = {k, w};
    return ans;

    return 0;
}