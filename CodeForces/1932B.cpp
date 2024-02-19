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
    	for (ll i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    	}

    	ll ans = v[0];
    	for (ll i = 1; i < n; ++i)
    	{
    		ans = v[i] * ((ans / v[i]) + 1);
    	}

    	cout << ans << "\n";
    }
    return 0;
}