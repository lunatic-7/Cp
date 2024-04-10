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
    	vector<int> arr[n];

        int mini = INT_MAX;
    	for (int i = 0; i < n; ++i)
    	{
    		int m;
    		cin >> m;
    		for (int j = 0; j < m; ++j)
    		{
    			int temp;
    			cin >> temp;
    			arr[i].PB(temp);
    			mini = min(mini, temp);
    		}
    	}

        multiset<int> vp;
    	for (int i = 0; i < n; ++i)
    	{
    		sort(arr[i].begin(), arr[i].end());
    		vp.insert(arr[i][1]);
    	}

    	int chk = 0;
    	ll ans = mini;
    	for (auto x : vp)
    	{
    		if (chk) ans += x;
    		if (chk == 0) chk = 1;
    	}

    	cout << ans << "\n";
    }
    return 0;
}