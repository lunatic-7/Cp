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
 

vector<int> getConcatenation(vector<int> nums)
{
	int sz = nums.size();
	for (int i = 0; i < sz; ++i)
	{
		nums.PB(nums[i]);
	}

	return nums;
}

int main()
{
    wasif();
    vector<int> nums = {1,4,1,2};

    vector<int> ans = getConcatenation(nums);
    showVect(ans);

    return 0;
}