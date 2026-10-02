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
 

vector<int> maxSlidingWindow(vector<int>& nums, int k) 
{
	vector<int> list;
	deque<int> deq;  // decreasing monotonic deque

	for (int i = 0; i < nums.size(); ++i)
	{
		// remove element if window size limit reached
		if (!deq.empty() && deq.front() <= i - k)  // if i = 3, k = 3 remove 0th
		{
			deq.pop_front();
		}

		// remove from back until we get greater element than current one
		while (!deq.empty() && nums[deq.back()] <= nums[i])
		{
			deq.pop_back();
		}
		deq.push_back(i);

		// if window size reaches push current max which will be value of front elem to our list
		if (i >= k - 1) list.push_back(nums[deq.front()]);
	}

	return list;
}


int main()
{
    wasif();
    
    vector<int> nums = {1, 2, 1, 0, 4, 2, 6};
    int k = 3;

    showVect(maxSlidingWindow(nums, k));

    return 0;
}