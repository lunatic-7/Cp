#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n, x;
    	cin >> n >> x;

    	vector<ll> ans(n, 0);

    	// if (x == 0)
    	// {
    	// 	for (int i = 0; i < n - 1; ++i)
    	// 	{
    	// 		ans[i] = i + 1;
    	// 	}
    	// }
    	// else if (x == n || x == n - 1)
    	// {
    	// 	for (int i = 0; i < n - 1; ++i)
    	// 	{
    	// 		ans[i] = i;
    	// 	}
    	// 	ans[n - 1] = n - 1;
    	// }
    	// else
    	// {
    	// 	for (int i = 0; i < n - 1; ++i)
    	// 	{
    	// 		ans[i] = i;
    	// 		if (i >= x) ans[i] = i + 1;
    	// 	}
    	// 	ans[n - 1] = x;
    	// }

		for (int i = 0; i < n - 1; ++i)
		{
			ans[i] = i;
			if (i >= x) ans[i] = i + 1;
		}

		if (x == n) ans[n - 1] = x - 1;
		else ans[n - 1] = x;

    	showVect(ans);
    	
    }
    return 0;
}