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
    	int move = 3;

        string s = "";
    	if (n < 29)
    	{ 
            while (move--)
            {
            	if (move > 0)
            	{
            		s += 'a' + 0;
            		n--;
            	} 
            	else
            	{
            		s += 'a' + (n - 1);
            	}
            }
    	}
    	else if (n < 54)
    	{
    		while (move--)
            {
            	if (move == 2)
            	{
            		s += 'a' + 0;
            		n--;
            	} 
            	else if (move == 1)
            	{
            		s += 'a' + (n - 1) - 26;
            	}
            	else
            	{
            		s += 'a' + 25;
            	}
            }
    	}
    	else if (n < 78)
    	{
    		while (move--)
    		{
    			if (move == 2)
    			{
    				s += 'a' + ((n % 26) - 1);
    			}
    			else
    			{
    				s += 'a' + 25;
    			}
    		}
    	}
    	else
    	{
    		while (move--)
    		{
    			s += 'a' + 25;
    		}
    	}

    	cout << s << "\n";
    }
    return 0;
}