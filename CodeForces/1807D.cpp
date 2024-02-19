#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 2*1e5+7;

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n, q;
    	cin >> n >> q;
    	ll arr[n + 1], hsh[n + 1] = {0};
    	for (int i = 1; i <= n; ++i)
    	{
    		cin >> arr[i];
    	}

    	for (int i = 1; i <= n; ++i)
    	{
    		hsh[i] = hsh[i - 1] + arr[i];
    	}

    	bool chk = 1;
    	if (!(hsh[n] & 1)) chk = 0;

    	while (q--)
    	{
    		ll l, r, k;
    		cin >> l >> r >> k;

    		ll toChk = (r - (l - 1)) * k;
    		if ((toChk % 2) == ((hsh[r] - hsh[l - 1]) % 2))
    		{
    			cout << (chk ? "YES" : "NO") << "\n";
    		}
    		else
    		{
    			cout << (!chk ? "YES" : "NO") << "\n";
    		}
    	}
    }
    return 0;
}