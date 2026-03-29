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
 

void rotate(vector<int>& nums, int k) {
    
    int sz = nums.size();
    
    vector<int> ans(sz);
    for (int i = 0; i < sz; ++i)
    {
    	int next_pos = (i + (k % sz)) % sz;
    	ans[next_pos] = nums[i];

    }
    nums = ans;   	
}

int main()
{
    wasif();
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 9;
    rotate(nums, k);

    showVect(nums);

    return 0;
}