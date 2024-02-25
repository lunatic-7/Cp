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
    	ll n;
    	cin >> n;
    	vector<ll> arr(n);
    	for (ll i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

        ll mini = arr[0];
    	ll tod = (mini * 2) - 1;
    	ll count = 0;
        ll pieces = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		if (arr[i] % tod == 0) pieces = (arr[i] / tod);
    		else
            {
                pieces = arr[i] / tod;
                pieces++;
            }
            count += pieces - 1;
    	}

    	cout << count << '\n';
    }

    return 0;
}