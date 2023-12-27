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
    	int x, y, n;
    	cin >> x >> y >> n;

        int fns = 0;
    	int ans = (n % x);  // 4
    	if (ans == y) fns = n;
    	if (ans > y) fns = n - (ans - y);
    	else if (ans < y)
    	{
            fns = n - ans - (x - y);
    	}

    	cout << fns << "\n";
    }
    return 0;
}