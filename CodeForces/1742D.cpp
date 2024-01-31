#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 1e3+1;


int main()
{
    wasif();

    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	
		vector<int> c(N, -1);
    	int temp;

    	for (int i = 1; i <= n; ++i)
    	{
    		cin >> temp;
    		c[temp] = i;
    	}

    	int ans = -1;
    	for (int i = 0; i < N; ++i)
    	{
    		for (int j = i; j < N; ++j)
    		{
    			if (c[i] > 0 && c[j] > 0)
    			{
    				if (__gcd(i, j) == 1)
    				{
    					ans = max(ans, c[i] + c[j]);
    				}
    			}
    		}
    	}

    	cout << ans << "\n";
    }
    return 0;
}