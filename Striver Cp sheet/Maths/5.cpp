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
    	int temp;

        int oddCt = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> temp;
    		if (temp & 1) oddCt++;
    	}

    	if (oddCt & 1) cout << "YES" << "\n";
    	else
    	{
    		if (oddCt > 0 && oddCt < n)
    		{
    			cout << "YES" << "\n";
    		}
    		else cout << "NO" << "\n";
    	}
    }
    return 0;
}