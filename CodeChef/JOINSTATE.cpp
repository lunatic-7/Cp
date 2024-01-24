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
    	ll n, m;
    	cin >> n >> m;
    	ll arr[n];

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

        ll iniCity = 0, sum = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (sum + arr[i] >= m) 
    		{
    			iniCity++;
    			sum = 0;
    		}
    		else
    		{
    			sum += arr[i];
    		}
    	}

    	cout << iniCity << '\n';
    }
    return 0;
}