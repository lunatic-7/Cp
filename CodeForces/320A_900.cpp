// SEEN
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
    int n;
    cin >> n;
    bool flag = 1;

    while (n)
    {
    	if (n % 10 == 4)
    	{
    		n /= 10;
    		if (n % 10 == 4)
    		{
    			n /= 10;
    			if (n % 10 != 1)
    			{
    				flag = 0;
    			}
    		}
    		else if (n % 10 == 1)
    		{
    			n /= 10;
    		}
    		else
    		{
    			flag = 0;
    		}
    	}
    	else if (n % 10 == 1)
    	{
    		n /= 10;
    	}
    	else
    	{
    		flag = 0;
    	}

    	if (flag == 0) break;
    }

   	cout << (flag ? "YES" : "NO") << "\n";
   
    return 0;
}