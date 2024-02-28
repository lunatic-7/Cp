#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Upsolved

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll a, b, l;
    	cin >> a >> b >> l;

    	set<ll> ans;
    	ll temp1 = 1;
    	for (int i = 0; i <= 20 && (temp1 <= l); ++i)
    	{
    		ll temp2 = 1;
    		for (int i = 0; i <= 20 && (temp1 * temp2 <= l); ++i)
    		{
    			if (l % (temp1 * temp2) == 0) ans.insert(l / (temp1 * temp2));
    		    temp2 *= b;
    		}
    	    temp1 *= a;
    	}

        cout << ans.size() << "\n";
    }

    return 0;
}