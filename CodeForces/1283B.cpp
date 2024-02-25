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
    	ll n, k;
    	cin >> n >> k;

    	ll maxKids = k / 2;
    	ll lim = n % k;

    	ll fix_candy = n / k;
        ll ans = k * (n / k) + min(lim, maxKids);

    	cout << ans << "\n"; 
    }
    return 0;
}