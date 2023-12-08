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
    	ll a, b, n, count = 1;
    	cin >> a >> b >> n;

    	while (a < n || b < n)
    	{
    		if (a + b > n) break;
    		if (a < b) a += b;
    		else if (b < a) b += a;
    		count++;
    	}

    	cout << count << "\n";
    }
    return 0;
}