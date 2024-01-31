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
    	char temp[8][8];

        int blue = 0, red = 0;
        char ans = 'B';
    	for (int i = 0; i < 8; ++i)
    	{
    		for (int j = 0; j < 8; ++j)
    		{
    			cin >> temp[i][j];
    		}
    	}

    	for (int i = 0; i < 8; ++i)
    	{
    		for (int j = 0; j < 8; ++j)
    		{
    			if (temp[i][j] == 'R') red++;
    		}
    		if (red == 8)
    		{
    			ans = 'R';
    			break;
    		}
    		else red = 0;
    	}

    	cout << ans << "\n";
    }

    return 0;
}