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

    	vector<ll> a(n);
    	ll sum = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    		sum += a[i];
    	}

    	ll ans = 3 - (sum % 3);

    	ll ans2 = 3;
    	for (int i = 0; i < n; ++i)
    	{
    		ans2 = min(ans2, (sum - a[i]) % 3);
    	}

    	if (ans == 3) cout << 0 << "\n";
    	else cout << min(ans2 + 1, ans) << "\n";
    }

    return 0;
}