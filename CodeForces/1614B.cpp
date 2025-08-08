#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

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

    	vector<pair<ll,ll>> build(n);
    	for (int i = 0; i < n; ++i)
    	{
    		ll temp;
    		cin >> temp;
    		build[i] = {temp, i + 1};
    	}

    	sort(build.begin(), build.end(), greater<>());

    	vector<pair<ll,ll>> ans(n + 1);
    	ll sum = 0;

    	ll beech = n / 2;
    	ll i = 0;
    	ll start = -1;

    	while (i < beech)
    	{
    		if (start < 0) 
    		{
    			ans[i] = {build[i].S, start};
    			sum += abs(start * 2) * build[i].F;
    			start = abs(start);
    		}
    		else 
    		{
    		    ans[i] = {build[i].S, start};
    		    sum += abs(start * 2) * build[i].F;
    		    start++;
    		    start = -start;
    		}
    		i++;
    	}

    	ans[i] = {0, 0};
    	i++;

    	while (i < n + 1)
    	{
    		if (start < 0) 
    		{
    			ans[i] = {build[i - 1].S, start};
    			sum += abs(start * 2) * build[i - 1].F;
    			start = abs(start);
    		}
    		else 
    		{
    		    ans[i] = {build[i - 1].S, start};
    		    sum += abs(start * 2) * build[i - 1].F;
    		    start++;
    		    start = -start;
    		}
    		i++;
    	}

    	sort(ans.begin(), ans.end());
     

        cout << sum << "\n";
        for (int i = 0; i < n + 1; ++i)
        {
        	cout << ans[i].S << " ";
        }

        cout << "\n";
    }
    return 0;
}