#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

ll func(ll num)
{
	ll mini = 10, maxi = -1;
	while (num > 0)
	{
		ll dig = num % 10;
		mini = min(mini, dig);
		maxi = max(maxi, dig);
		num /= 10;
	}

	return mini * maxi;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll a, k;
    	cin >> a >> k;

    	while (--k)  // --k coz phle term k = 1 or a1 ke ly nhi chlaana 
    	{
    		ll nxt = a + func(a);
    		if (a == nxt) break;  // mtlb func(a) ne 0 return kiya
    		a = nxt;  // ab nxt term a bn jyga
    	}

    	cout << a << "\n";
    }
    return 0;
}