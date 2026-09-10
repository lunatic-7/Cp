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


bool chk(vector<int>& piles, int h, int mid)
{
	int hrs = 0;
	for (int i = 0; i < piles.size(); ++i)
	{
		hrs += ceil( (double) piles[i] / (double) mid);
		if (hrs > h) return false;
	}

	return true;
}

int minEatingSpeed(vector<int>& piles, int h) 
{
	auto maxi = max_element(piles.begin(), piles.end());
	int left = 1, right = *maxi;
	int ans = right;

	// Binary searching on ans, it will check mid as hour, if that hour is possible,
	// and we will try to minimize it as low as possible (FFFFTTTT) need to find first T
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (chk(piles, h, mid))
		{
			ans = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}	    

	return ans;
}

int main()
{
    wasif();
    vector<int> piles = {1, 4, 3, 2};
    int h = 9;

    cout << minEatingSpeed(piles, h) << "\n";

    return 0;
}