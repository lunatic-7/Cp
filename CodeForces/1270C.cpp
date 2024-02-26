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
    	ll n;
    	cin >> n;

    	vector<ll> zor(n), ans;
    	ll f_zor = 0, tot = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> zor[i];
    		tot += zor[i];
    		f_zor ^= zor[i];
    	}

        if (tot == 2 * f_zor) 
        {
        	cout << 0 << "\n";
        	cout << "\n";
        }
        else
        {
        	ll toChk = (tot + f_zor) * 2;
        	cout << 2 << "\n";
        	cout << f_zor << " " << tot + f_zor << "\n"; 
        }
    }
    return 0;
}