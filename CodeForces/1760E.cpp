#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

ll countInv(vector<ll> arr)
{
	ll chk = 0, count = 0;
	for (ll i = 0; i < arr.size(); ++i)
	{
		if (arr[i] == 1) chk++;
		if (arr[i] == 0) count += chk;
	}

	return count;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	cin >> n;

    	vector<ll> arr(n);
    	ll ct1 = 0 , ct2 = 0, ct3 = 0;
    	for (ll i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	ct1 = countInv(arr);

    	for (ll i = 0; i < n; ++i)
    	{
    		if (arr[i] == 0)
    		{
    			arr[i] = 1;
    			ct2 = countInv(arr);
    			arr[i] = 0;
    			break;
    		}
    	}

    	for (ll i = n - 1; i >= 0; --i)
    	{
    		if (arr[i] == 1)
    		{
    			arr[i] = 0;
    			ct3 = countInv(arr);
    			arr[i] = 1;
    			break;
    		}
    	}



    	ll ans = max(ct1, ct2);
    	ans = max(ans, ct3);

    	cout << ans << "\n";
    }
    return 0;
}