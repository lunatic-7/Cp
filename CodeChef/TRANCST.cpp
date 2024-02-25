#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// PBREV

const int M = 1e9+7;

ll countTotalBits(ll number) {
    ll count = 0;

    while (number) {
        count++;
        number >>= 1;
    }

    return count;
}

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	cin >> n;

    	ll start = countTotalBits(n);

    	// Setting first 2 bit
    	ll k = n;
    	ll result;
    	for (ll i = 0; i < start; ++i)
    	{
    		if (i > start - 3) n = (n | (1 << i));
    		else n = (n & (~(1 << i)));
    	}

    	cout << n - k << "\n";
	}
    return 0;
}