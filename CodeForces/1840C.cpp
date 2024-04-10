#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

ll days_ways(ll cons)
{
	ll ans = (cons * (cons + 1)) / 2;
	return ans;
}

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n, k, q;
    	cin >> n >> k >> q;
    	vector<ll> arr(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	ll cons = 0, ans = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (arr[i] <= q) cons++;
    		else if (cons >= k)
    		{
    			ans += days_ways(cons - k + 1);
    			cons = 0;
    		}
            else cons = 0;
    	}

    	if (cons >= k) ans += days_ways(cons - k + 1);

    	cout << ans << "\n";
    }
    return 0;
}