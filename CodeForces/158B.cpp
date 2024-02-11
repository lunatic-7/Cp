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
    ll n;
    cin >> n;

    vector<ll> arr(n);
    vector<ll> mp(5, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    ll cars = 0;
    for (int i = 1; i < 5; ++i)
    {
    	if (i == 1)
    	{
    		if (mp[i] <= mp[3])
    		{
    			mp[i] = 0;
    		}
    		else mp[i] = mp[i] - mp[3];
    	}
    	else if (i == 2)
    	{
    		cars += mp[i] / 2;
    		mp[1] += (mp[i] % 2) * 2;
    		cars += mp[1] / 4;
    		if (mp[1] % 4 > 0) cars++;
    	}
    	else
    	{
    		cars += mp[i];
    	}
    }

    cout << cars << "\n";

    return 0;
}