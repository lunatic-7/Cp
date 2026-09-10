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
 

bool chk(vector<int>& weights, int days, int mid)
{
	int allowed_weight_range = 0;

	for (int i = 0; i < weights.size(); ++i)
	{
		allowed_weight_range += weights[i];

		if (allowed_weight_range > mid)
		{
			--days;
			allowed_weight_range = weights[i];
		}
		if (days <= 0) return false;
	}

	return true;
}

int shipWithinDays(vector<int>& weights, int days)
{
	int low = *max_element(weights.begin(), weights.end());
	int high = accumulate(weights.begin(), weights.end(), 0);
	int ans = high;

	while (low <= high)
	{
		// Binary searching on ans FFFFTTTT (Find first true)
		int mid = (high + low) / 2;
		if (chk(weights, days, mid))
		{
			ans = mid;
			high = mid - 1;
		}
		else low = mid + 1;
	}

	return ans;
}


int main()
{
    wasif();

    vector<int> weights = {1, 2, 3, 4, 5};
    int days = 5;
    cout << shipWithinDays(weights, days) << "\n";

    return 0;
}