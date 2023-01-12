// TLE
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] = v[i] % m;
    }
    
    int q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll y = x % m;
        ll temp = (m - 1) - y;

    }
    
    return 0;
}