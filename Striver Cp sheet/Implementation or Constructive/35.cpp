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
    int A, B;
    while (t--)
    {
    	ll a, b, c;
    	cin >> a >> b >> c;

    	if (b * a <= c)
    	{
    		B = -1;
    		A = 1;
    	}
    	else if (b * a > c)
    	{
    		if (1 * a < c)
    		{
    			B = b;
    			A = 1;
    		}
    		else
    		{
    			B = b;
    			A = -1;
    		}
    	}

    	cout << A << " " << B << "\n";
    }
    return 0;
}