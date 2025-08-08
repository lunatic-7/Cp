#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

ll checker(ll mid, vector<ll>& khuta, ll c)
{
	ll cows = 1, point = 0;
	for (int i = 1; i < khuta.size(); ++i)
	{
		if (khuta[i] - khuta[point] >= mid)
		{
			cows++;
			point = i;
		}

		if (cows >= c) return true;
	}
	return false;
}

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n, c;
    	cin >> n >> c;

    	vector<ll> khuta(n);
    	for (int i = 0; i < n; ++i)
    	{
    	    cin >> khuta[i];
    	}

    	sort(khuta.begin(), khuta.end());

    	ll left = 1, right = 1e9, ans;
    	while (left <= right)
    	{
    		ll mid = (left + right) / 2;
    		if (checker(mid, khuta, c))
    		{
    			ans = mid;
    			left = mid + 1;
    		}
    		else right = mid - 1;
    	}

    	cout << ans << "\n";
    }
    return 0;
}