#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

const int N = 1e5+7;
int ans[N] = {0};

int main()
{
    wasif();
    int n;
    cin >> n;

    int x[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> x[i];
    }

    sort(x, x + n);

    // Hashing
    for (int i = 0; i < n; ++i)
    {
    	if (ans[x[i]] == 0) ans[x[i]] = i;
    }

    int q;
    cin >> q;
    while (q--)
    {
    	int m;
    	cin >> m;

    	if (m < x[0]) cout << 0 << "\n";
    	else if (m >= x[n -1]) cout << n << "\n";
    	else
    	{
	    	int *it = upper_bound(x, x + n, m);
	    	cout << ans[*it] << "\n";    		
    	}
    }
    return 0;
}