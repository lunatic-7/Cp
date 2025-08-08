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
    int t;
    cin >> t;

    while (t--)
    {
    	ll n, k;
    	cin >> n >> k;

    	vector<pair<ll, ll>> mon(n);

    	for (ll i = 0; i < n; ++i)
    	{
    		ll temp;
    		cin >> temp;
    		mon[i] = {temp, i + 1};
    	}

    	for (ll i = 0; i < n; ++i)
    	{
    		mon[i].F = mon[i].F % k;
    		if (mon[i].F == 0) mon[i].F = k;
    	}

    	sort(mon.begin(), mon.end(), [&](pair<ll, ll> a, pair<ll, ll> b) {
            if (a.F != b.F) return a.F > b.F;
            return a.S < b.S;
    	});

    	for (auto x : mon)
    	{
    		cout << x.S << " ";
    	}
    	cout << "\n";
    }
    return 0;
}