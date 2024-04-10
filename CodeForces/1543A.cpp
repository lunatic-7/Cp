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
    // cout << __gcd(27, 54);
    int t;
    cin >> t;

    while (t--)
    {
    	ll a, b;
    	cin >> a >> b;

        ll fnum = abs(b - a);
    	ll snum = 0;

    	if (fnum > 0 && a % fnum != 0)
    	{
    		ll temp = a % fnum;
    		snum = min(fnum - temp, temp);
    	}

    	cout << fnum << " " << snum << "\n";
    }
    return 0;
}