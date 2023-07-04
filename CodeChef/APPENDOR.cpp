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
    int T;
    cin >> T;

    while (T--)
    {
    	ll n, y;
    	cin >> n >> y;
    	ll a[n];
    	int fb = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    		fb |= a[i];
    	}

    	int chk = 1;

    	for (int i = 0; i < 21; ++i)
    	{
    		if ((fb & (1 << i)) && !(y & (1 << i)))
    		{
    			chk = 0;
    			break;
    		}
    	}

    	if (chk) cout << y - fb << "\n";
    	else cout << -1 << "\n";
    }
    return 0;
}