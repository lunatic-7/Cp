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
 

void shift(vector<int>& nums1, int k, int i)
{
	while (k--)
	{
		swap(nums1[i], nums1[i + 1]);
		i++;
	}
}


int removeDuplicates(vector<int>& nums) {
	
	// duplicate count
	int ct = 0;
	for (int i = 0; i < nums.size() - 1; ++i)
	{
		if (nums[i] == nums[i + 1]) ct++;
	}

	int k = 0;
	for (int i = 0; i < nums.size() - 1; ++i)
    {
		if ((nums[i] == nums[i + 1]) && k < ct)
		{
			shift(nums, nums.size() - i - 1, i);
			i--;
			showVect(nums);
			k++;
		}    	
    }    

    return nums.size() - ct;
}

int main()
{
    wasif();
    vector<int> nums = {1, 1, 2, 3, 4};
    cout << removeDuplicates(nums);
    cout << "\n";
    showVect(nums);

    return 0;
}