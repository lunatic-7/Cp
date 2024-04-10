#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 1e5+2;

// To be upsolved

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	int arr[n];
		vector<bool> hsh(N, 0);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		hsh[arr[i]] = 1;
    	}

    	int mux = -1;
    	for (int i = 0; i <= n + 1; ++i)
    	{
    		if (hsh[i] == 0)
    		{
    			mux = i;
    			break;
    		}
    	}

    	int k = -1;
    	int temp_mux;
    	for (int i = 0; i < n; ++i)
    	{
	    	if (i == 0 && arr[i] == 0) temp_mux = 1;
	    	else if (i == 0) temp_mux = 0;

    		if (temp_mux == mux)
    		{
    			k = i + 1;
    			break;
    		}

    		if (arr[i] <= temp_mux) temp_mux++;
    		if (i == n - 1 && temp_mux == mux) k = n + 1;

    	}

    	int m = -1, temp2_mux = -1;
    	for (int i = k; i < n; ++i)
    	{
	    	if (i == k && arr[k] == 0) temp2_mux = 1;
	    	else if (i == k) temp2_mux = 0;

    		if (temp2_mux == mux)
    		{
    			m = i + 1;
    			break;
    		}

    		if (arr[i] <= temp2_mux) temp2_mux++;
    		if (i == n - 1 && temp2_mux == mux) m = n + 1;
    	}

    	if (m == -1) cout << -1 << "\n";
    	else 
    	{
    		cout << 2 << "\n";
    		cout << 1 << " " << k << "\n";
    		cout << k + 1 << " " << n << "\n";
    	}
    }
    return 0;
}