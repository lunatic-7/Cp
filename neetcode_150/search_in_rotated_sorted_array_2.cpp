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
 

// Need to watch video of it
bool search(vector<int>& nums, int target)
{
    int l = 0, r = nums.size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        // Found it
        if (nums[mid] == target)
            return true;

        // Duplicates make it impossible to know
        // which half is sorted.
        if (nums[l] == nums[mid] && nums[mid] == nums[r])
        {
            l++;
            r--;
        }

        // Left half is sorted
        else if (nums[l] <= nums[mid])
        {
            // Is target inside the sorted left half?
            if (nums[l] <= target && target < nums[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }

        // Right half is sorted
        else
        {
            // Is target inside the sorted right half?
            if (nums[mid] < target && target <= nums[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }

    return false;
}


int main()
{
    wasif();

    vector<int> nums = {3, 4, 4, 5, 6, 1, 2, 2};
    int target = 1;
    cout << search(nums, target) << "\n";

    return 0;
}