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
    	ll a, b, c;
    	cin >> a >> b >> c;
    	ll tent = a;

    	tent += b / 3;
    	ll chk = b % 3;
    	bool ck = 1;

    	if (chk != 0)
    	{
    		if (chk + c >= 3)
    		{
    			if ((chk + c) % 3 == 0) tent += (chk + c) / 3;
    			else tent += ((chk + c) / 3) + 1;
    		}
    		else ck = 0;
    	}
    	else
    	{
            if (c % 3 == 0) tent += c / 3;
    		else tent += (c / 3) + 1;
    	}

    	cout << (ck ? tent : -1) << "\n";
    }
    return 0;
}