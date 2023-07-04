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
    int T;
    cin >> T;

    while (T--)
    {
    	int n;
    	cin >> n;
    	int cnt = 0;
    	int maxi = 0;
    	int x[n], y[n];

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> x[i];
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> y[i];
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		if ((x[i] > 0) && (y[i] > 0))
    		{
    			cnt++;
    			maxi = max(maxi, cnt);
    		}
    		else cnt = 0;
    	}

    	cout << maxi << "\n";
    }
    return 0;
}