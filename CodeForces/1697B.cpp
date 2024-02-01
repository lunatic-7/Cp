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
    int n, q;
    cin >> n >> q;

    vector<int> p(n);
    vector<ll>  tot(n + 1, 0);  // Precomputation

    for (int i = 0; i < n; ++i)
    {
    	cin >> p[i];
    }

    sort(p.begin(), p.end(), greater<int>());
    
    tot[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        tot[i] = tot[i - 1] + p[i - 1]; 
    }

    while (q--)
    {
    	int x, y;
    	cin >> x >> y;

        ll ans = 0;
        ans = tot[x] - tot[x - y];

        cout << ans << "\n";
    }

    return 0;
}