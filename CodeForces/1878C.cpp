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
    	ll n, k, x;
    	cin >> n >> k >> x;

    	ll mini = (k * (k + 1)) / 2;
    	ll maxi = (k * ((n - k + 1) + n)) / 2;

    	if (x >= mini && x <= maxi) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }
    return 0;
}