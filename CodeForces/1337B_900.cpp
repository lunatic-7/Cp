// WRONG
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
    int T;
    cin >> T;

    while (T--)
    {
    	int pow, va, ls;
    	cin >> pow >> va >> ls;

	    for (int i = 0; i < va; ++i)
	    {
    		if (pow > 20)
    		{
		    	if (pow <= 0) break;
		    	pow = floor(pow / 2) + 10;    			
    		}
	    }    		

    	for (int i = 0; i < ls; ++i)
    	{
    		if (pow <= 0) break;
    		pow = pow - 10;
    	}
    	cout << (pow ? "NO" : "YES") << "\n";
    }

    return 0;
}