#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Upsolved

int main()
{
    wasif();

	int n, m;
	cin >> n >> m;
	vector<string> s(n), t(m);

	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> t[i];
	}

	int q;
	cin >> q;

	while (q--)
	{
		int y;
		cin >> y;

        y--; // bc 0 based
        cout << s[y % n] + t[y % m] << "\n";
	}

    return 0;
}