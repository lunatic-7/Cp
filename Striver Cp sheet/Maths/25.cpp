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
    	ll n;
    	cin >> n;

    	int chk = 0;
    	if (n > 14)
    	{
    		ll lim = (n / 14) - 1;
    		ll lim_a = n - (lim * 14);

    		if (lim_a >= 15 && lim_a <= 20) chk = 1;
    	}

    	cout << (chk ? "YES" : "NO") << "\n";
    }

    return 0;
}