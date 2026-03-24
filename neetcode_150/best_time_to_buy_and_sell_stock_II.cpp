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
 

int maxProfit(vector<int>& prices) {
    
    int ans = 0;
    for (int i = prices.size() - 1; i > 0; --i)
    {
    	if (prices[i - 1] < prices[i]) ans += (prices[i] - prices[i - 1]);
    }

    return ans;
}

int main()
{
    wasif();
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);

    return 0;
}