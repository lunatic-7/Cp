#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
int r, c;

bool validity(int cr, int cc)
{
	bool valid = 1;

	if (cr > (r - 1) || cr < 0 || cc > (c - 1) || cc < 0) valid = 0;
	return valid;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	cin >> r >> c;
    	char arr[r][c];
    	int cnt = 0;

    	for (int i = 0; i < r; ++i)
    	{
    		for (int j = 0; j < c; ++j)
    		{
    			cin >> arr[i][j];
    		}
    	}

    	for (int i = 0; i < r; ++i)
    	{
    		for (int j = 0; j < c; ++j)
    		{
    			if (arr[i][j] == 'R')
    			{
    				if (validity(i, j + 1)) continue;
    				else
    				{
    					arr[i][j] = 'D';
    					cnt++;
    				}
    			}
    			else if (arr[i][j] == 'D')
    			{
    				if (validity(i + 1, j)) continue;
    				else
    				{
    					arr[i][j] = 'R';
    					cnt++;
    				}
    			}
    		}
    	}

    	cout << cnt << "\n";
    }
    return 0;
}