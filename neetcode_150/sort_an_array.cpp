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

vector<int> nums = {10,9,1,1,1,2,3,1};

void merge(int l, int r, int mid)
{
	// Dono sorted array create krne hai
	int l_sz = mid - l + 1;
	int L[l_sz + 1];

	int r_sz = r - mid;
	int R[r_sz + 1];

	for (int i = 0; i < l_sz; ++i)
	{
		L[i] = nums[i + l];
	}

	for (int i = 0; i < r_sz; ++i)
	{
		R[i] = nums[i + mid + 1];
	}

	L[l_sz] = R[r_sz] = INT_MAX;

	// Dono sorted ko 1 sorted mai merge krna hai
	int l_i = 0, r_i = 0;
	for (int i = l; i <= r; ++i)
	{
		if (L[l_i] <= R[r_i])
		{
			nums[i] = L[l_i];
			l_i++;
		}
		else
		{
			nums[i] = R[r_i];
			r_i++;
		}
	}
}


void mergeSort(int l, int r)
{
	if (l == r) return;
	int mid = (l + r)/ 2;
	mergeSort(l, mid);
	mergeSort(mid + 1, r);

	merge(l, r, mid);
}

vector<int> sortArray(vector<int>& nums) {
	mergeSort(0, nums.size() - 1);
	return nums;
}

int main()
{
    wasif();
   	
   	vector<int> ans = sortArray(nums);
   	showVect(ans);

    return 0;
}