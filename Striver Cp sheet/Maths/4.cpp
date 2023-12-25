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
    	int n, x;
    	cin >> n >> x;
    	
    	n -= 2;
    	int fl = 1;
    	while (1)
    	{
    		if (n <= 0) break;
    		n -= x;
    		fl++;
    	}

    	cout << fl << "\n";
    }
    return 0;
}