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
    ll n, t;
    cin >> n >> t;

    if (t == 10 && n > 1)
    {
    	cout << 10;
    	for (int i = 0; i < n - 2; ++i)
    	{
    		cout << 0;
    	}
    }
    else if (t < 10)
    {
	    for (int i = 0; i < n; ++i)
	    {
	    	cout << t;
	    }    	
    }
    else cout << -1 << "\n";
    return 0;
}