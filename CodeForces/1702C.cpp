#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// SEEN

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, k;
    	cin >> n >> k;

    	map<int, pair<int, int>> ans;
    	for (int i = 0; i < n; ++i)
    	{
    		int u;
    		cin >> u;
    		if (!ans.count(u))  // element phle se nhi hai
    		{
    			ans[u] = {i, i};
    		}
    		else ans[u].S = i;  // element phle se hai
    	}

    	while (k--)
    	{
    		int aj, bj;
    		cin >> aj >> bj;

    		if (!ans.count(aj) || !ans.count(bj) || ans[aj].F > ans[bj].S) cout << "NO" << "\n";
    		else cout << "YES" << "\n";
    	}
    }
    return 0;
}