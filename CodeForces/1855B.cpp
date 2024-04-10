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

    	ll cnt = 0, maxi = 0;
    	for (ll i = 1; i <= 100; ++i)
    	{
    		if (n % i == 0)
    		{
    			cnt++;
                maxi = max(maxi, cnt);
    		}
    		else cnt = 0;
    	}

    	cout << maxi << "\n";
    }
    return 0;
}