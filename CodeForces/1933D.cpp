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
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if (v[0] != v[1])
        {
            cout << "YES" << "\n";
            continue;
        }

        ll chk = 0;
        for (auto x : v)
        {
            if (x % v[0] > 0)
            {
                chk = 1;
                break;
            }
        }

        cout << (chk ? "YES" : "NO") << "\n";
    }
    return 0;
}