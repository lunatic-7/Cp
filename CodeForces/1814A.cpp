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
    	ll n, k;
    	cin >> n >> k;

    	bool chk = 0;
    	if (n % 2 == 0) chk = 1;
    	else if ((n - k) % 2 == 0) chk = 1;

    	cout << (chk ? "YES" : "NO") << "\n";
    }
    return 0;
}