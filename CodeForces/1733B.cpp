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
    	int n, x, y;
    	cin >> n >> x >> y;
    	int game =  n - 1;

    	int chk = 1;
    	if (x != 0 && y != 0) chk = 0;
    	else if (x == 0 && y == 0) chk = 0;
    	else
    	{
    		if (game % max(x, y) != 0) chk = 0;
    	}

    	if (chk)
    	{
            int win = 1;
            for (int i = 0; i < game; ++i)
            {
            	if (i % (max(x, y)) != 0)
            	{
            		cout << win << " ";
            	}
            	else
            	{
            		if (i == 0) 
            		{
            			cout << win << " ";
            		}
            		else
            		{
	            		if (win == 1) win += max(x, y) + 1;           			
	            		else win += max(x, y); 
	            		cout << win << " ";
            		}
            	} 
            }
            cout << "\n";
    	}
    	else 
    	{
    		cout << -1 << "\n";
    	}
    }

    return 0;
}