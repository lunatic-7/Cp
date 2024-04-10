#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// https://cses.fi/problemset/task/1620

bool possible(ll mid, vector<ll>& arr, ll t)
{
	ll product = 0;
	ll n = arr.size();
	for (int i = 0; i < n; ++i)
	{
		product += (mid / arr[i]);
		if (product >= t) return true;
	}

	return product >= t;
}

int main()
{
    wasif();
    ll n, t;
    cin >> n >> t;

    vector<ll> arr(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    ll left = 0, right = 1e18;  // Binary searching on answer
    ll ans = right;

    while (left <= right)
    {
    	ll mid = (right + left) / 2;
    	if (possible(mid, arr, t))
    	{
    		ans = mid;
    		right = mid - 1;
    	}
    	else left = mid + 1;
    }

    cout << ans << "\n";
    
    return 0;
}