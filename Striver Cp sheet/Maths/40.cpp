#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

ll solve(ll n, ll k)
{
	bool toAdd = 0;
	toAdd = k % n;

	return (k / n) + toAdd;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n, k;
    	cin >> n >> k;

    	if (n > k)
    	{

    		ll toMul = n % k;
    		if (toMul == 0) toMul = n;
    		else toMul = n + (k - toMul);
    		cout << solve(n, toMul) << "\n";
    	}
    	else cout << solve(n, k) << "\n";
    }
    return 0;
}