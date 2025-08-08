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
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n, res = 0;
    	cin >> n;
    	vector<ll> a(n), b(n), c(n);
    	vector<pair<ll, ll>> va, vb, vc;

    	for (ll i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    		va.PB({a[i], i});
    	}

    	for (ll i = 0; i < n; ++i)
    	{
    		cin >> b[i];
    		vb.PB({b[i], i});
    	}

    	for (ll i = 0; i < n; ++i)
    	{
    		cin >> c[i];
    		vc.PB({c[i], i});
    	}

    	sort(va.begin(), va.end(), greater<>());
    	sort(vb.begin(), vb.end(), greater<>());
    	sort(vc.begin(), vc.end(), greater<>());

    	for (ll i = 0; i < 3; ++i)
    	{
    		for (ll j = 0; j < 3; ++j)
    		{
    			for (ll k = 0; k < 3; ++k)
    			{
    				if (va[i].S != vb[j].S && va[i].S != vc[k].S && vb[j].S != vc[k].S)
    				{
    					res = max(va[i].F + vb[j].F + vc[k].F, res);
    				}
    			}
    		}
    	}

    	cout << res << "\n";	
    }
    return 0;
}