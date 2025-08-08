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
    
    vector<int> nums = {-1,0,1,0,3};

    int pre = 1, post = 1;

    vector<ll> ans(nums.size(), 1);

    // Pre
    for (int i = 0; i < nums.size() - 1; ++i)
    {
    	pre *= nums[i];
    	ans[i + 1] *= pre;
    }

    // Post
    for (int i = nums.size() - 1; i > 0; --i)
    {
    	post *= nums[i];
    	ans[i - 1] *= post;
    }

    return ans;

    return 0;
}