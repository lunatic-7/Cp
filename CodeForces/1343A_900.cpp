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
    ll T;
    cin >> T;
    while (T--)
    {
	    ll n;
	    cin >> n;

	    ll k = 2;
	    while (1)
	    {
	    	double x = (double) n / (double) (pow(2, k) - 1);
	    	ll x_i = x;
	    	if (x_i == x)
	    	{
	    		cout << x_i << "\n";
	    		break;
	    	}
	    	k++;
	    }    	
    }

    return 0;
}