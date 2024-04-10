#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// SEEN

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	vector<int> p(n + 1);
    	for (int i = 1; i <= n; ++i)
    	{
    		cin >> p[i];
    	}

    	int res = 0;
    	for (int i = 1; i <= n; ++i)
    	{
    		res = __gcd(res, abs(p[i] - i));
    	}

    	cout << res << "\n";
    }
    return 0;
}