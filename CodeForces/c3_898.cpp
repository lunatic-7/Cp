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
	    char grid[11][11];
	    int points = 0;

	    for (int i = 1; i <= 10; ++i)
	    {
	    	for (int j = 1; j <= 10; ++j)
	    	{
	    		cin >> grid[i][j];
	    		if (grid[i][j] == 'X')
	    		{
	    			if (i > 5 && j > 5) points += min(10 - i, 10 - j) + 1;
	    			else if (i > 5 && (10 - i < j)) points += min(10 - i, j) + 1;
	    			else if (j > 5 && (10 - j < i)) points += min(i, 10 - j) + 1;
	    			else points += min(i, j);
	    		}
	    	}
	    }
	    cout << points << "\n";    	
    }

    return 0;
}