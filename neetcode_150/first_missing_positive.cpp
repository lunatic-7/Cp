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


int negativeMarking(vector<int> &nums)
{
	// Marking all -ve numbers as 0 as they are useless to us
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] < 0) nums[i] = 0;
	}

	// Making found value nums[value - 1] negative, negative marks we have that value
	for (int i = 0; i < nums.size(); ++i)
	{
		int number = abs(nums[i]);
		if (number && number <= nums.size())  // 0 eliminated
		{
			if (nums[number - 1] == 0) nums[number - 1] =  -(nums.size() + 1);
			else if (nums[number - 1] > 0) nums[number - 1] = nums[number - 1] * -1;
		}
	}

	// Checking iterating till nums.size() if that index exists
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] >= 0) return i + 1;
	}

	return nums.size() + 1;
}

int firstMissingPositive(vector<int>& nums) {
    
    sort(nums.begin(), nums.end());
    int missing = 1;

    for (int i = 0; i < nums.size(); ++i)
    {
    	if (nums[i] == missing) missing++;
    }

    return missing;
}

int main()
{
    wasif();
    vector<int> nums = {-2, -1, 0};
    cout << negativeMarking(nums) << "\n";

    return 0;
}