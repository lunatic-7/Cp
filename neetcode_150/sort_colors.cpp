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

// CountSort
void countSort(vector<int>& nums) 
{
	vector<int> cnt(3);
	for (int i = 0; i < nums.size(); ++i)
	{
		cnt[nums[i]]++;
	}

	int index = 0;
	for (int i = 0; i < cnt.size(); ++i)
	{
		while (cnt[i]--)
		{
			nums[index++] = i;
		}
	}
}

// Dutch National Flag Algorithm (3 pointers)
void DutchAlgo(vector<int> & nums)
{
	int low = 0, mid = 0, high = nums.size() - 1;
	while (mid <= high)
	{
		if (nums[mid] == 0)
		{
			swap(nums[mid], nums[low]);
			low++, mid++;
		}
		else if (nums[mid] == 1)
		{
			mid++;
		}
		else
		{
			swap(nums[mid], nums[high]);
			high--;
		}
	}

	showVect(nums);
}


int main()
{
    wasif();
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    DutchAlgo(nums);

    return 0;
}