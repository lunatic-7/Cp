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

    	if (n & 1) for (int i = 0; i < n; ++i) cout << 1 << " ";
    	else
    	{
    	    for (int i = 0; i < n; ++i)
    	    {
    		    if (i == 0) cout << 1 << " ";
    		    else if (i == 1) cout << 3 << " ";
    		    else cout << 2 << " ";
        	}    		
    	} 
    	cout << "\n";
    }
    return 0;
}