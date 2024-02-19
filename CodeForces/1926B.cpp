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

    	char grid[n][n];
    	vector<int> gg;
    	int count = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < n; ++j)
    		{
    			cin >> grid[i][j];
    			if (grid[i][j] == '1') count++;
    		}
    		if (count > 0) gg.PB(count);
    		count = 0;
    	}

    	if (gg[0] == gg[gg.size() - 1]) cout << "SQUARE" << "\n";
    	else cout << "TRIANGLE" << "\n";
    }
    return 0;
}