#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// WRONG ANS

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	cin >> n;

    	ll ans = INT_MAX;
    	ll j = n - 1;
    	ll ansi = 0, ansj = 0;
    	for (ll i = 1; i <= min(n / 2, 10 * 1LL); ++i)
    	{
    		ll lcm = (i  * j) / __gcd(i , j);
    		if (ans > lcm)
    		{
    			ans = lcm;
    			ansi = i;
    			ansj = j;
    		}
    		j--;
    	}

        if (n % 2 == 0)
        {
            ll mid = n / 2;
            ll bcm = (mid * mid) / __gcd(mid, mid);
            if (ans > bcm)
            {
                ans = bcm;
                ansi = mid;
                ansj = mid;
            }
        }
        
        if (n % 3 == 0)
        {
            ll mid2 = n / 3;
            ll bcm = (mid2 * (2 * mid2)) / __gcd(mid2, 2 * mid2);
            if (ans > bcm)
            {
                ans = bcm;
                ansi = mid2;
                ansj = 2 * mid2;
            }
        }


    	cout << ansi << " " << ansj << "\n";
    }
    return 0;
}