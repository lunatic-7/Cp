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
    	int nc = 0, ni = 1;
        bool zero = false;

        int temp;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> temp;
    		if (temp < 0)
    		{
    			nc++;
    			ni = i + 1;
    		}
            if (temp == 0) zero = true;
    	}

        if (zero) cout << 0 << "\n";
    	else if (nc % 2 == 0)
    	{
            cout << 1 << "\n";
            cout << ni << " " << 0 << "\n";
    	}
    	else cout << 0 << "\n";
    }
    return 0;
}