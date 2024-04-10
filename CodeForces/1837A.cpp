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
    	int x, k;
    	cin >> x >> k;

    	if (x % k == 0) 
    	{
    		cout << 2 << "\n";
    		cout << x - 1  << " " << 1 << "\n";
    	}
    	else 
    	{
    		cout << 1 << "\n";
    		cout << x << "\n"; 
    	}
    }
    return 0;
}