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
    	ll A, B;
    	cin >> A >> B;

    	int chk = 1;
    	if (B == 1) chk = 0;
    	ll num = A * B * 2;
    	
    	ll x = A * 1;
    	ll y = A * ((B * 2) - 1);

    	if (chk)
    	{
	        cout << "YES" << "\n";
	    	cout << x << " " << y << " " << num << "\n";    		
    	}
    	else cout << "NO" << "\n";
    }
    return 0;
}