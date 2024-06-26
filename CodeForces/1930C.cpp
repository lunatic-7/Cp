#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// UPSOLVED

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	vector<int> a(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    		a[i] += (i + 1);
    	}

        // Decreasing sort
        sort(a.rbegin(), a.rend());

        int val = INT_MAX;
    	
    	for (auto x : a)
    	{
    		if (x >= val)
    		{
    			cout << val - 1 << " ";
    			val--;
    		}
    		else
    		{
    			cout << x << " ";
    			val = x;
    		}
    	}
    	cout << "\n";
    }
    return 0;
}