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

    	vector<int> v(n);
    	int maxelm = 0, minelm = INT_MAX;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    		maxelm = max(maxelm, v[i]);
    		minelm = min(minelm, v[i]);
    	}

        int ans = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (i == n - 1) ans = max(ans, v[i] - v[0]);
    		else ans = max(ans, v[i] - v[i + 1]);
    	}

    	ans = max(ans, maxelm - v[0]);
    	ans = max(ans, v[n - 1] - minelm);

    	cout << ans << "\n";
    }
    return 0;
}