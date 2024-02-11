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
    	int k, n;
    	cin >> k >> n;

    	vector<int> ans(k, 1);

    	for (int i = 0; i < k; ++i)
    	{
    		if (i != 0) 
    		{
    			ans[i] = ans[i - 1] + i;
    			if ((k - (i + 1)) > (n - ans[i])) ans[i] = ans[i - 1] + 1;
    		}
    	}

    	for (int i = 0; i < k; ++i)
    	{
    		cout << ans[i] << " ";
    	}
    	cout << "\n";
    }

    return 0;
}