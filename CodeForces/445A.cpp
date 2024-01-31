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
    char arr[n][m];

    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		cin >> arr[i][j];
    	}
    }

    char b = 'B';
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		if (m & 1)
    		{
    			if (arr[i][j] != '-')
    			{
	    			arr[i][j] = b;
    			}
	    		if (b == 'B') b = 'W';
	    		else b = 'B';    				
    		}
    		else 
    		{
    			if (arr[i][j] != '-')
    			{
	    			arr[i][j] = b;
    			}
	    		if (b == 'B') b = 'W';
	    		else b = 'B'; 
    			if (j == m - 1)
    			{
    				if (b == 'B') b = 'W';
	    			else b = 'B';
    			}
    		}
    	}
    }

    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		cout << arr[i][j];
    	}
    	cout << "\n";
    }
    return 0;
}