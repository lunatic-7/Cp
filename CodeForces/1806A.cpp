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
    	ll a, b, c, d;
    	cin >> a >> b >> c >> d;

    	ll x = c - a, y = d - b;

        bool chk = 0;
        ll move = 0;
    	if (a + y >= c && y >= 0)
    	{
    		chk = 1;
            move = y + ((a + y) - c);
    	}

    	cout << (chk ? move : -1) << "\n";
    }
    return 0;
}