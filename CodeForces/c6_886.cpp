// TLE
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

    	vector<int> frogs(n);

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> frogs[i];
    	}

    	vector<int> ans(n + 1, 0);

    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 1; j <= n; ++j)
    		{
    			if (j % frogs[i] == 0)
    			{
    				ans[j]++;
    			}
    		}
    	}

 		int maxi = 0;
 		for (int i = 1; i < ans.size(); ++i)
 		{
 			maxi = max(maxi, ans[i]);
 		}
 		cout << maxi << "\n";

    }
    return 0;
}