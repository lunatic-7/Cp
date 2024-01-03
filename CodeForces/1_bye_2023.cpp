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
    	int temp, mul = 1;

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> temp;
    		mul *= temp;
    	}

    	if (2023 % mul == 0)
    	{
    		cout << "YES" << "\n";
    		cout << 2023 / mul << " ";
    		k--;
    		while (k--)
    		{
    			cout << 1 << " ";
    		}
    		cout << "\n";
    	}
    	else cout << "NO" << "\n";
    }
    return 0;
}		