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
 

int search(vector<int>& nums, int target) {
    
    int sz = nums.size();
    int left = 0, right = sz - 1;
    int ans = -1;

    while(left <= right)
    {
    	int mid = (left + right) / 2;
    	if (nums[mid] == target) return mid;
    	else if (nums[mid] < target) left = mid + 1;
    	else if (nums[mid] > target) right = mid - 1;
    }

    return ans;
}


int main()
{
    wasif();

    vector<int> nums = {-1, 0, 2, 4, 6, 8};
    int target = 4;

    cout << search(nums, target) << "\n";

    return 0;
}