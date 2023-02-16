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
    	int a, b;
    	cin >> a >> b;

    	int i = a, j = a + 1;
    	int chk = 0;

    	while (j <= b)
    	{
    		if (__gcd(i, j) > 1)
    		{
    			chk = 1;
    			break;
    		}
    		j++;
    		if (i < (b - 1) && j == b) ++i, j = i + 1;
    	}

    if (chk) cout << i << " " << j << "\n";
    else cout << -1 << "\n";

    }
    return 0;
}