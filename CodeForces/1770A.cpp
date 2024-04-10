#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Wrong

int main()
{
    wasif();
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {

        int n, m;
        cin >> n >> m;

        vector<ll> a(n), b(m);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());

        int k = 0, moti = 0;
        while (moti < m)
        {
            if (a[k] < b[moti] || k == 0)
            {
                swap(a[k], b[moti]);
                k++;
                if (k == n) k = 0;
            }
            else
            {
                swap(a[k - 1], b[moti]);
            }
            moti++;
        }

        ll ans = 0;
        for (int i = 0; i < n; ++i)
        {
            ans += a[i];
        }

        cout << ans << '\n';
    }

    return 0;
}