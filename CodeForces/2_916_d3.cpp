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
    	int n, k;
    	cin >> n >> k;

        if (n - k > 0)
        {
        	for (int i = n - k; i >= 1; --i)
        	{
        		cout << i << " ";
        	}            
        }

    	for (int i = (n - k) + 1; i <= n; ++i)
    	{
    		cout << i << " ";
    	}
    	cout << "\n";
    }
    return 0;
}