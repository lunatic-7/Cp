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
 

int removeElement(vector<int> nums, int val)
{
	int j = 0;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] != val)
		{
			nums[j] = nums[i];
			j++;
		}
	}

	return j;
}

int main()
{
    wasif();
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int k = removeElement(nums, val);

    cout << k << "\n";

    return 0;
}