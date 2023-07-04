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
    	int a, b, c;
    	cin >> a >> b >> c;

    	for (int i = 2; i <= 100; ++i)
    	{
    		if ((a % i != 0) && (b % i != 0) && (c % i != 0))
    		{
    			cout << i << "\n";
    			break;
    		}
    	}
    }
    return 0;
}