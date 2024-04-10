#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

ll bin_expo(ll a, ll b)
{
	ll ans = 1;
	while (b)
	{
		if (b & 1) ans = ans * a;
		a = a * a;
		b >>= 1;
	}
	return ans;
}

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	cin >> n;
    	ll arr[n], chk = 0, b = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if (arr[i] == 1) chk++;
    		if (arr[i] == 0) b++;
    	}

    	ll ans = bin_expo(2, b);
    	ans *= chk;

    	cout << (chk ? ans : chk) << "\n";
    }
    return 0;
}