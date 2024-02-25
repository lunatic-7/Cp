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
    	ll pos = 0, maxi = 0;
    	ll a, b;

    	for (int i = 1; i <= 22; ++i)
    	{
    		cin >> a >> b;
    		if (maxi < (a * 1) + (b * 20))
    		{
    			maxi = (a * 1) + (b * 20);
    			pos = i;
    		}
    	}

    	cout << pos << "\n";
    }
    return 0;
}