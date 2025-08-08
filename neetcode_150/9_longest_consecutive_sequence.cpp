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
    vector<int> nums = {2, 20, 4, 10, 3, 4, 5};

    set<int> krde;
    for (int i = 0; i < nums.size(); ++i)
    {
    	krde.insert(nums[i]);
    }

    int diff = 0, len = 1;
    int maxLen = 1;
    int num = *krde.begin();
    for (auto &x : krde)
    {
    	diff = x - num;
    	if (diff == 1)
    	{
    		len++;
    		maxLen = max(len, maxLen);
    	}
    	else if (diff == 0) continue;
    	else len = 1;

    	num = x;
    }

    if (krde.size() == 0) maxLen = 0; 

    return maxLen;

    return 0;
}