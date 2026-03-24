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


vector<int> boyerMooreUpgraded(vector<int> &nums)
{
	// This version with hashMap can handle any number of n / k (k elements)
	unordered_map<int, int> count;
	for (int i = 0; i < nums.size(); ++i)
	{
		count[nums[i]]++;

		if (count.size() > 2) // because here we have k = 3 (which means at most 2 elements)
		{
			unordered_map<int, int> newCount;
			for (auto &x : count)
			{
				if (x.S > 1) newCount[x.F] = x.S - 1;  // x.S > 1 So, that we can ignore the latest elem with freq = 1 added
			}
			count = newCount;
		}
	}

	vector<int> ans;
	for (auto &ct : count)
	{
		int freq = 0;
		for (auto &num : nums)
		{
			if (ct.F == num) freq++;
		}

		if (freq > nums.size() / 3) ans.PB(ct.F);
	}


	return ans;
}

vector<int> boyerMoore(vector<int> &nums)
{
	// Intuition:  We can already know in an array of size n, we can only have at most 2 elements with > n/3 occurances;
	int num1 = -1, num2 = -1;
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] == num1) cnt1++;
		else if (nums[i] == num2) cnt2++;
		else if (cnt1 == 0) 
		{
			num1 = nums[i];
			cnt1++; 
		}

		else if (cnt2 == 0) 
		{
			num2 = nums[i];
			cnt2++;
		}
		else 
		{
			cnt1--;
			cnt2--;
		}

	}

	// Now we have got 2 mostly occuring numbers
	// But still we need to check if those numbers occurs more than n/3 times
	vector<int> ans;
	cnt1 = cnt2 = 0;

	for (int i = 0; i < nums.size(); ++i)
	{
		if (num1 == nums[i]) cnt1++;
		if (num2 == nums[i]) cnt2++;

	}
	
	if (cnt1 > nums.size() / 3) ans.PB(num1);
	if (cnt2 > nums.size() / 3) ans.PB(num2);

	return ans;
}


 
vector<int> majorityElement(vector<int>& nums) {
    
    unordered_map<int, int> freq;
    for (int i = 0; i < nums.size(); ++i)
    {
    	freq[nums[i]]++;
    }

    vector<int> ans;
    for (auto &x : freq)
    {
    	if (x.S > nums.size() / 3) ans.PB(x.F);
    }

    return ans;
}


int main()
{
    wasif();
    
    vector<int> nums = {5, 2, 3, 2, 2, 2, 2, 5, 5, 5};
    vector<int> ans = boyerMooreUpgraded(nums);

    showVect(ans);

    return 0;
}