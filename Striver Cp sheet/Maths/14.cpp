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

    	int ans = n / 2;
    	if (ans & 1) cout << "NO" << "\n";
    	else 
    	{
    		cout << "YES" << "\n";
    		int even = 2;
    		int odd = 1;
    		for (int i = 1; i <= ans; ++i)
    		{
    			cout << even << " ";
    			even += 2;
    		}

    		for (int i = 1; i <= ans; ++i)
    		{
    			if (odd == ans + 1)
    			{
    				odd += 2;
    			}
    			cout << odd << " ";
    			odd += 2;
    		}
    		cout << "\n";
    	}
    }
    return 0;
}