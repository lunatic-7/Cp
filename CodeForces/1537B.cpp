#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// WRONG

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n, m, i, j;
    	cin >> n >> m >> i >> j;

    	// corners;
    	vector<pair<ll, ll>> vp;

    	if (n == 1 && m > 1) vp = {{1, 1}, {1, m}};
    	else if (n > 1 && m == 1) vp = {{1, 1}, {n, 1}};
    	else if (n == 1 && m == 1) vp = {{1, 1}};
    	else vp = {{1,1}, {n,1}, {1,m}, {n,m}};

    	multimap<ll, ll> mp;

    	for (int k = 0; k < vp.size(); ++k)
    	{
    		mp.insert({abs(i - vp[k].F) + abs(j - vp[k].S), k});
    	}

    	if (mp.size() == 1)
    	{
    		int c = 2;
    		while (c--)
    		{
	    		for (auto it = mp.rbegin(); it != mp.rend(); ++it)
	    		{
	    			cout << vp[it->S].F << " " << vp[it->S].S << " ";
	    		}    			
    		}
    	}
    	else
    	{
    		int c = 3;
	    	for (auto it = mp.rbegin(); it != mp.rend(); ++it)
	    	{
	    		c--;
	    		if (c > 0) cout << vp[it->S].F << " " << vp[it->S].S << " ";
	    	}   	
    	}

    	cout << "\n";
    }
    return 0;
}