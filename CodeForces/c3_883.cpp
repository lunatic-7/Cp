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
	    ll n, m, h;
	    cin >> n >> m >> h;  // n = no. of participants, m = no. of problems, h = total time
	    ll arr[n + 1][m + 1];
	    vector<pair<ll,ll>> final;

	    // storing values
	    for (int i = 1; i <= n; ++i)
	    {
	    	for (int j = 1; j <= m; ++j)
	    	{
	    		cin >> arr[i][j];
	    	}
	    }

	    // Performing Algo
	    for (int i = 1; i <= n; ++i)
	    {
	    	vector<ll> temp;
	    	for (int j = 1; j <= m; ++j)
	    	{
	    		temp.PB(arr[i][j]);
	    	}

	    	sort(temp.begin(), temp.end());

	    	ll point = 0, time = 0, remain_time = h, penalty = 0;

	    	for (int j = 0; j < temp.size(); ++j)
	    	{
	    		if (temp[j] <= remain_time)
	    		{
	    			point++;
	    			time += temp[j];
	    			penalty += time;
	    			remain_time = h - temp[j];
	    		}
	    	}

	    	final.PB({point, penalty});


	    	// cout << i << " " << point << " " << penalty << "\n";
	    }
	    // cout << "\n";

	    ll pos = 1;
	    for (int i = 1; i < final.size(); ++i)
	    {
	    	if (final[0].first < final[i].first)
	    	{
	    		pos++;
	    	}

	    	if (final[0].first <= final[i].first)
	    	{
		    	if (final[0].second > final[i].second)
		    	{
		    		pos++;
		    	}
	    	}
	    }
	    
	    cout << pos << "\n";
    }


    return 0;
}