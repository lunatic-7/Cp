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
    	int n, k;
    	cin >> n >> k;

    	string s;
    	cin >> s;
    	vector<int> ans(n + 1);

    	ans[0] = 0;
    	// Prefix sum method
    	for (int i = 0; i < n; ++i)
    	{
    		ans[i + 1] = ans[i];
    		if (s[i] == 'W') ans[i + 1]++;
    	}

    	int ansP = n;
    	for (int i = 0; i <= n - k; ++i)
    	{
    		ansP = min(ansP, ans[i + k] - ans[i]);
    	}

    	cout << ansP << "\n";
    }
    return 0;
}