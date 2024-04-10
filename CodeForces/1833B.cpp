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

    	vector<int> a(n), b(n);
    	vector<pair<int, int>> pp;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    		pp.PB({a[i], i});
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> b[i];
    	}

    	sort(pp.begin(), pp.end());
    	vector<int> ansid, ans(n);
    	for (auto x : pp)
    	{
    		ansid.PB(x.S);
    	}
    	sort(b.begin(), b.end());

    	for (int i = 0; i < n; ++i)
    	{
    		ans[ansid[i]] = b[i];
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		cout << ans[i] << " ";
    	}
    	cout << "\n";
    	
    }
    return 0;
}