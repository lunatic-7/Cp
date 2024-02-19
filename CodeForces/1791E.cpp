#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	cin >> n;

    	vector<ll> v(n); 
    	ll negCt = 0, sm = INT_MAX;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    		if (v[i] < 0) negCt++;
    		sm = min(sm, abs(v[i]));
    	}

        ll tot = 0;
        for (int i = 0; i < n; ++i)
        {
        	tot += abs(v[i]);
        }

    	if (negCt & 1)
    	{ 
    		cout << tot - (2 * sm) << "\n";
    	}
    	else cout << tot << "\n";
    }
    return 0;
}