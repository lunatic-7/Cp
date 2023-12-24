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
    	int n;
    	cin >> n;
    	int x[n], y[n];
    	bool l = false;
    	bool r = false;
    	bool u = false;
    	bool d = false;

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> x[i] >> y[i];
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		if (x[i] < 0) l = true;
    		if (x[i] > 0) r = true;
    		if (y[i] < 0) d = true;
    		if (y[i] > 0) u = true;
    	}

    	if (l && r && u && d) cout << "NO" << "\n";
    	else cout << "YES" << "\n";
    }
    return 0;
}