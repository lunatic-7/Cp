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
 

int maxProfit(vector<int>& prices) 
{
	int chota = INT_MAX;
	int ans = 0;

	for (int i = 0; i < prices.size(); ++i)
	{
		chota = min(chota, prices[i]);
		if (prices[i] > chota) ans = max(prices[i] - chota, ans);
	}

	return ans;
}

int main()
{
    wasif();

    vector<int> prices = {10, 8, 7, 6, 5, 1};
    cout << maxProfit(prices) << "\n";

    return 0;
}