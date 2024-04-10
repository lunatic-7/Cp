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
    	int n, mainCost;
    	cin >> n >> mainCost;

    	vector<int> kitna(n), cost(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> kitna[i];
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> cost[i];
    	}

    	multimap<ll, ll> mp;
    	for (int i = 0; i < n; ++i)
    	{
    		mp.insert({cost[i], kitna[i]});
    	}

    	ll cnt = 0, netCost = 0;
    	cnt++;
    	netCost += mainCost;
    	for (auto z : mp)
    	{
    		ll temp;
    		if (cnt >= n) break;
    		if (z.F >= mainCost)
    		{
    			netCost += (n - cnt) * mainCost;
    			cnt += n - cnt;
    			break;
    		}

    		temp = min(z.S, n - cnt);
    		netCost += temp * z.F;
    		cnt += temp;
    	}

    	cout << netCost << "\n";
    }
    return 0;
}