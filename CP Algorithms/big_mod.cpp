#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

ll solve(ll b, ll p, ll m)
{
	b = b % m;
	ll ans = 1;
	while (p)
	{
		if (p & 1) ans = ((ans % m) * (b % m)) % m;
		b = ((b % m) * (b % m)) % m;
		p >>= 1;
	}

	return ans;
}

int main()
{
    wasif();
   
    ll b, p, m;
    while(cin >> b >> p >> m)
    {
	    ll ans = solve(b, p, m);
	    cout << ans << "\n";
    }

    return 0;
}