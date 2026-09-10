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

// SEEN Striver
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
	int sz1 = nums1.size();
	int sz2 = nums2.size();
	int sz = sz1 + sz2;
	if (sz1 > sz2) return findMedianSortedArrays(nums2, nums1);  // To ensure to always take smaller length array's binary search

	int low = 0, high = sz1;
	int left = (sz + 1) / 2;  // No. of elements requires on left

	while (low <= high)
	{
		int mid1 = (low + high) / 2;
		int mid2 = left - mid1;

		// Default values
		int l1 = INT_MIN, l2 = INT_MIN;
		int r1 = INT_MAX, r2 = INT_MAX;

		if (mid1 < sz1) r1 = nums1[mid1];
		if (mid2 < sz2) r2 = nums2[mid2];
		if (mid1 - 1 >= 0) l1 = nums1[mid1 - 1];
		if (mid2 - 1 >= 0) l2 = nums2[mid2 - 1];

		if (l1 <= r2 && l2 <= r1)
		{
			if (sz & 1) return max(l1, l2);
			else
			{
				return (double) (max(l1, l2) + min(r1, r2)) / 2.0;
			}
		}
		else if (l1 > r2) high = mid1 - 1;
		else low = mid1 + 1;
	}

	return 0;  // default return
}


int main()
{
    wasif();
    
    vector<int> nums1 = {1, 2}, nums2 = {3};
    cout << findMedianSortedArrays(nums1, nums2) << "\n";

    return 0;
}