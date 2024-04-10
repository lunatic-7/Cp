#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// UNSOLVED

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll x, n;
    	cin >> x >> n;

    	if ((x & 1))
    	{
    		if (n % 4 == 0) cout << x << "\n";
    		else if (n % 4 == 1) cout << (x + 1) + ((n / 4) * 4) << "\n";
    		else if (n % 4 == 2) cout << (x - 1) + ((n / 4) * 4) << "\n";
    		else if (n % 4 == 3) cout << -1 * ((x + 4) + ((n / 4) * 4)) << "\n";
    	}
    	else
    	{
    		if (n % 4 == 0) cout << x << "\n";
    		else if (n % 4 == 1) cout << (x - 1) + ((n / 4) * 4) << "\n";
    		else if (n % 4 == 2) cout << (x + 1) + ((n / 4) * 4) << "\n";
    		else if (n % 4 == 3) cout << (x + 4) + ((n / 4) * 4) << "\n";
    	}
    }
    return 0;
}