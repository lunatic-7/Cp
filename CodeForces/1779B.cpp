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

        int five = 1;
    	if (n == 3) 
    	{
    		cout << "NO" << "\n";
    	}
    	else if (n & 1)
    	{
    		cout << "YES" << "\n";
    		for (int i = 1; i <= n; ++i)
    		{
    			int num = ((n - 5) / 2) + five;
    			if (i & 1) cout << num << " ";
    			else cout << -num -1 << " ";
    		}
    		cout << "\n";
    	}
    	else 
    	{
    		cout << "YES" << "\n";
    		for (int i = 0; i < n; ++i)
    		{
    			if (i & 1) cout << -1 << " ";
    			else cout << 1 << " ";
    		}
    		cout << "\n";
    	}
    }
    return 0;
}