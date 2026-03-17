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


int majorityElement(vector<int> nums)
{
	int atleastsz = nums.size() / 2;
	int hehe = 0;

	map<int, int> ans;
	for (int i = 0; i < nums.size(); ++i)
	{
		ans[nums[i]]++;
	}

	for (auto &x : ans)
	{
		if (x.S > atleastsz)
		{
			hehe = x.F;
			break;
		}
	}

	return hehe;
}

int main()
{
    wasif();
    vector<int> nums = {5,5,1,1,1,5,5};
    cout << majorityElement(nums) << "\n";

    return 0;	
}