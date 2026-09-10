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
 

int search(vector<int>& nums, int target) 
{
	// find minimum number index that will be the pivot of two sorted arrays
	int low = 0, high = nums.size() - 1;

	while (low <= high)
	{	
		int mid = (low + high) / 2;
		// if mid is the target return index
		if (nums[mid] == target) return mid;
		
		// if left one is the sorted half
		else if (nums[low] <= nums[mid])
		{
			// if target inside the sorted left half
			if (nums[low] <= target && target < nums[mid]) high = mid - 1;
			else low = mid + 1;
		}
		// if right one is the sorted half
		else
		{
			// if target inside the sorted right half
			if (nums[mid] < target && target <= nums[high]) low = mid + 1;
			else high = mid - 1;
		}
	}

	return -1;
}


int main()
{
    wasif();
    
    vector<int> nums = {3, 4, 5, 6, 1, 2};
    int target = 8;
    cout << search(nums, target) << "\n";

    return 0;
}