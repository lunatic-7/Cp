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
    int n, m;
    cin >> n >> m;
    char arr[n + 1][m + 1];

    for (int i = 1; i <= n; ++i)
    {
    	for (int j = 1; j <= m; ++j)
    	{
    		if (i % 2 == 0 && i % 4 == 0)
    	    {
    	    	if (j != 1) arr[i][j] = '.';
    	    	else arr[i][j] = '#';
    	    }
    		else if (i % 2 == 0)
    	    {
    	    	if (j != m) arr[i][j] = '.';
    	    	else arr[i][j] = '#';
    	    }
    	    else
    	    {
    	    	arr[i][j] = '#';
    	    }
    	}
    }

    for (int i = 1; i <= n; ++i)
    {
    	for (int j = 1; j <= m; ++j)
    	{
    		cout << arr[i][j];
    	}
    	cout << "\n";
    }

    return 0;
}