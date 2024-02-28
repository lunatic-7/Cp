#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// UNSOLVED (To be upsolved)

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n, q;
    	cin >> n >> q;
    	vector<ll> arr(n), vect;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	sort(arr.begin(), arr.end());
    	ll op1 = 0, op2 = 0;
    	for (int i = 0; i < n - 1; ++i)
    	{
    		op1 += arr[i] + arr[i + 1];
    	}

        vect = arr;

    	swap(arr[1], arr[n - 1]);
    	for (int i = 0; i < n - 1; ++i)
    	{
    		op2 += arr[i] + arr[i + 1];
    	}

    	while (q--)
    	{
    		int temp;
    		cin >> temp;
    		if (temp == op1)
    		{
    			for (int i = 0; i < n; ++i)
    			{
    				cout << vect[i] << " ";
    			}
    			cout << "\n";
    		}
    		else if (temp == op2)
    		{
    			for (int i = 0; i < n; ++i)
    			{
    				cout << arr[i] << " ";
    			}
    			cout << "\n";
    		}
    		else cout << -1 << "\n";
    	}
    }

    return 0;
}