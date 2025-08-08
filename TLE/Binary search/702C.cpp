#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

bool checker(ll mid, vector<ll>& city, vector<ll>& tower)
{
	ll csize = city.size();
	ll tsize = tower.size();

	ll tow = 0, cit = 0;
	while (cit < csize)
	{
		while (tow < tsize && abs(tower[tow] - city[cit]) > mid)
		{
			tow++;
			if (tow == tsize) return false;
		}

		cit++;
	}

	return true;
}


int main()
{
    wasif();
    ll n, m;
    cin >> n >> m;

    vector<ll> city(n), tower(m);

    for (int i = 0; i < n; ++i)
    {
    	cin >> city[i];
    }

    for (int i = 0; i < m; ++i)
    {
    	cin >> tower[i];
    }

    ll left = 0, right = 2e9, ans = 0;
    while (left <= right)
    {
    	ll mid = (left + right) / 2;
    	if (checker(mid, city, tower))
    	{
    		ans = mid;
    		right = mid - 1;
    	}
    	else left = mid + 1;
    }

    cout << ans << "\n";

    return 0;
}