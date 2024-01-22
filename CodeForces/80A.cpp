#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int nxtP(int n, int m)
{
	int np = 0;
	for (int i = n + 1; i <= m; ++i)
	{
		for (int j = 2; j < i; ++j)
		{
			np = i;
			if (i % j == 0)
			{
				np = 0;
				break;
			}
		}
		if (np != 0) break;
	}

	return np;
}

int main()
{
    wasif();
    int n, m;
    cin >> n >> m;

    if (nxtP(n, m) == m) cout << "YES" << '\n';
    else cout << "NO" << "\n";

    return 0;
}