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
 

vector<int> sortColors(vector<int> &nums)
{
	vector<vector<int>> radix(3, vector<int>(3));

	for (int i = 0; i < 3; ++i)
	{
		vector<int> temp;
		for (int j = 0; j < nums.size(); ++j)
		{
			if (nums[j] == i) temp.PB(nums[j]);
		}
		radix[i] = temp;
	}

	// for (int i = 0; i < nums.size(); ++i)
	// {
	// 	radix[nums[i]].PB(nums[i]);
	// }


	int k = 0;
	for (int i = 0; i < radix.size(); ++i)
	{
		for (int j = 0; j < radix[i].size(); ++j)
		{
			nums[k] = radix[i][j];
			k++;
		}
	}

	return nums;
}

int main()
{
    wasif();
    // RADIX SORT
    vector<int> nums = {1,0,1,2};
    vector<int> ans = sortColors(nums);

    showVect(ans);

    return 0;
}