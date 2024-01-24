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
    int n, m;
    cin >> n >> m;

    int a, b;
    double c;
    ll cnt = 0;
    for (int i = 0; i <= n; ++i)
    {
    	b = i;
    	a = n - b;
    	c = sqrt(a);

    	if (c == (int)(c))
    	{
    		if (c + (b * b) == m) cnt++;
    	}
    }

    cout << cnt << "\n";
    return 0;
}