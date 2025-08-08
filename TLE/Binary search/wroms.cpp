#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

void solve(ll num, vector<ll>& pre)
{
	auto lb = lower_bound(pre.begin(), pre.end(), num);
	cout << (lb - pre.begin()) + 1 << "\n";
}

int main()
{
    wasif();
    ll n;
    cin >> n;

    vector<ll> worms(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> worms[i];
    }

	vector<ll> pre(n);

    // Prefix sum
    pre[0] = worms[0];
    for (int i = 1; i < n; ++i)
    {
    	pre[i] = pre[i - 1] + worms[i];
    }

    ll m;
    cin >> m;

    for (int i = 0; i < m; ++i)
    {
    	ll num;
    	cin >> num;

    	solve(num, pre);
    }

    return 0;
}