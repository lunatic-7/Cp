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
    	ll x, y, a, b;
    	cin >> x >> y >> a >> b;
    	ll ans = 0;

    	ll mini = (a, b);
    	ll maxi = (a, b);

    	ll dodfa = min(x, y);
    	ll ekdfa = max(x, y) - dodfa;

	    if (a * 2 > b)
	    {
	        ans += dodfa * b;
	    }
	    else ans += dodfa * (a * 2);

	    ans += ekdfa * a;

	    cout << ans << "\n";
    }
    return 0;
}