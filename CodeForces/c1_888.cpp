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
    	int n, m, k, H;
    	cin >> n >> m >> k >> H;
    	vector<int> pp(n);
    	int ans = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> pp[i];
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		if (abs(pp[i] - H) <= (m - 1) * k && abs(pp[i] - H) != 0)
    		{
    			if (abs(pp[i] - H) % k == 0)
    			{
    				ans++;
    			}
    		}
    	}

    	cout << ans << "\n";
    }
    return 0;
}