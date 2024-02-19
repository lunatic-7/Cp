#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

bool dist(int i, int j, int sx, int sy, int d)
{
	int dc = abs(sx - i) + abs(sy - j);
	if (dc > d) return true;

	return false;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, m, sx, sy, d;
    	cin >> n >> m >> sx >> sy >> d;

    	bool path1 = 1, path2 = 1;
    	for (int i = 1; i <= n; ++i)
    	{
    		if (!dist(i, 1, sx, sy, d)) path1 = 0;

    		if (!dist(i, m, sx, sy, d)) path2 = 0;
    	}

    	if (path1 || path2)
    	{
    		for (int i = 1; i <= m; ++i)
    		{
	    		if (!dist(n, i, sx, sy, d)) path1 = 0;

	    		if (!dist(1, i, sx, sy, d)) path2 = 0;	
    		}
    	}

    	if (path1 || path2) cout << (n + m) - 2 << "\n"; 
    	else cout << -1 << "\n";
    }
    return 0;
}