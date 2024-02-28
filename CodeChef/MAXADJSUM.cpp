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
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	cin >> n;
    	vector<ll> v(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    	}

    	sort(v.begin(), v.end());
    	swap(v[1], v[n - 1]);

    	ll ans = 0;
    	for (int i = 0; i < n - 1; ++i)
    	{
    		ans += v[i] + v[i + 1];
    	}

    	cout << ans << "\n";
    }
    return 0;
}