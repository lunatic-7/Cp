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
    	ll a, b, n;
    	cin >> a >> b >> n;
    	ll arr[n];
    	ll time = b;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		if ((arr[i] + 1) > a) 
    		{
    			time += a - 1;
    		}
    		else time += arr[i];
    		if (time == 1) break;
    	}

    	cout << time << "\n";
    }
    return 0;
}