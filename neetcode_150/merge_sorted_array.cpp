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
 

void shift(vector<int>& nums1, int k, int m)
{
	while (k--)
	{
		swap(nums1[m - 1], nums1[m - 2]);
		m--;
	}
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	

	int i = 0, j = 0;
	int osz = n + m;
    while (i < osz && j < n)
    {
    	if (osz - i == n - j)
    	{
    		nums1[i] = nums2[j];
    		j++;
    	}
    	else if (nums1[i] > nums2[j])
    	{
    		shift(nums1, osz - (i + 1), osz);
    		nums1[i] = nums2[j];
    		j++;
    	}
    	i++;
    }		

	showVect(nums1);
}

int main()
{
    wasif();
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}, nums2 = {2, 5, 6};
    int m = 3, n = 3;
    merge(nums1, m, nums2, n);

    return 0;
}