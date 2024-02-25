#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const ll N = 1e5+7;

vector<ll> pre(N);
vector<ll> upre(N);

int main()
{
    wasif();
    ll n, m;
    cin >> n >> m;

    vector<ll> mine(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> mine[i];
    }

    // Precomputation seedha
    for (int i = 1; i < n; ++i)
    {
    	ll num1 = mine[i - 1] - mine[i];
    	if (num1 > 0) pre[i] = pre[i - 1] + num1;
    	else pre[i] = pre[i - 1];
    }

    // // Precomputation ulta
    for (int i = n - 1; i >= 1; --i)
    {
    	ll num2 = mine[i] - mine[i - 1];
    	if (num2 > 0) upre[n - i] = upre[ n - (i + 1)] + num2;
    	else upre[n - i] = upre[n - (i + 1)];
    }

    while (m--)
    {
        ll s, t;
        cin >> s >> t;

        if (s < t) cout << pre[t - 1] - pre[s - 1] << "\n";
        else cout << upre[n - t] - upre[n - s] << "\n";
    }
    return 0;
}