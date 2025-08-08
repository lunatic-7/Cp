#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    vector<int> candies = {2,3,5,1,3};

    int maxi = INT_MIN;
    for (int i = 0; i < candies.size(); ++i)
    {
    	maxi = max(maxi, candies[i]);
    }

    int extraCandies = 3;
    vector<bool> ans;
    for(auto &x : candies)
    {
    	if (x + extraCandies >= maxi) ans.PB(true);
    	else ans.PB(false);
    }

    for (int i = 0; i < ans.size(); ++i)
    {
    	cout << ans[i] << "\n";
    }

    return 0;
}