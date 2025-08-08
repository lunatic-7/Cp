#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll xo, n;
    	cin >> xo >> n;

    	ll ans = 0;

    	if ((xo & 1)) // xo odd
    	{
    		if ((n & 1)) // n odd
    		{
    			if ((n - 1) % 2 == (n - 1) % 4) // n - 1 div by 2 and 4
    			{ 
                	ans = xo + n;
    			}
    			else ans = (xo - 1) - n;
    		}
    		else
    		{
    			if (n % 2 == n % 4) // n div by 2 and 4
    			{ 
                	ans = xo;
    			}
    			else ans = xo - 1;
    		}
    	}
    	else  // xo even
    	{
    		if ((n & 1)) // n odd
    		{
    			if ((n - 1) % 2 == (n - 1) % 4) // n - 1 div by 2 and 4
    			{ 
                	ans = xo - n;
    			}
    			else ans = (xo + 1) + n;
    		}
    		else
    		{
    			if (n % 2 == n % 4) // n div by 2 and 4
    			{ 
                	ans = xo;
    			}
    			else ans = xo + 1;
    		}
    	}

    	cout << ans << "\n";
    }

    return 0;
}