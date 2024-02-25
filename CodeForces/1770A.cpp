#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// WRONG ANS

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, m;
    	cin >> n >> m;

    	vector<int> fi(n), se(m);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> fi[i];
    	}
    	for (int i = 0; i < m; ++i)
    	{
    		cin >> se[i];
    	}

        sort(fi.begin(), fi.end());
    	sort(se.rbegin(), se.rend());

    	ll sum = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (i > m - 1) sum += fi[i];
    		else sum += se[i];
    	}

    	cout << sum << "\n";
    }
    return 0;
}