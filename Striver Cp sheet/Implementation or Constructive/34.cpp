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
    int n;
    cin >> n;

    for (int row = -n; row <= n; ++row)
    {
    	// for n = 3, i will be -> -3 -2 -1 0 1 2 3
    	// spaces                   6  4  2 0 2 4 6
    	int spaces = 2 * abs(row);
    	// First print spaces
    	for (int i = 0; i < spaces; ++i)
    	{
    		cout << " ";
    	}

    	int max = n - abs(row); // What max no can be in a row
    	for (int i = 0; i < max; ++i)
    	{
    		cout << i << " ";  // max se phle wale
    	}
    	for (int i = max; i > 0; --i)
    	{
    		cout << i << " ";  // max ke baad wale
    	}

    	cout << 0 << "\n";  // Handling last 0 and next line here.
    }
    return 0;
}