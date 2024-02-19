#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

ll addnchk(ll next, ll prev)
{
	if (next % prev == 0)
	{
		next++;
		addnchk(next, prev);
	}

	return next;
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
    	ll arr[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if (arr[i] == 1) arr[i]++;
    	}

    	for (int i = 0; i < n - 1; ++i)
    	{
    		arr[i + 1] = addnchk(arr[i + 1], arr[i]);
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		cout << arr[i] << " ";
    	}
    	cout << "\n";
    }
    return 0;
}