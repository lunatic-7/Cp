#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

bool chk(ll val, ll n)
{
	ll ans = 0;
	for (int i = 1; i <= n; ++i)
	{
		ans += min(n, val / i);
	}
	ll total = n*n;
	// number of chote elements val se phle (including val)
	return (ans >= total/2 + 1 ? true : false);
}

int main()
{
    wasif();
    ll n;
    cin >> n;

    ll left = 0, right = n*n + 1;
    ll ans = right;
    while (left <= right)
    {
    	ll mid = (left + right) / 2;
    	if (chk(mid, n))
    	{
            ans = mid;
            right = mid - 1;
    	}
    	else left = mid + 1;
    }

    cout << ans << "\n";
    return 0;
}