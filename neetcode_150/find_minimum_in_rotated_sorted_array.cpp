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
 

int findMin(vector<int> &nums) 
{
	// Find min element: If mid elem chota hai high wale se means we are on the correct side,
	// min can be mid or mid - 1, so high = mid;
	// If mid elem bda hai high se, means hum decreasing side hai chota elem can be at side low = mid + 1
	int low = 0, high = nums.size() - 1;

	while (low < high)
	{
		int mid = (low + high) / 2;
		if (nums[mid] <= nums[high]) high = mid;
		else if (nums[mid] > nums[high]) low = mid + 1;
	}

	return nums[high];
}

int main()
{
    wasif();
    
    vector<int> nums = {3, 4, 1, 2};
    cout << findMin(nums) << "\n";

    return 0;
}