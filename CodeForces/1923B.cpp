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
    int t;
    cin >> t;

    while (t--)
    {
    	ll n, k;
    	cin >> n >> k;

        ll health[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> health[i];
        }

        ll b[n + 1] = {0};  // Initilized with 0 from index = 1, to store sum of healths
        // at b[i]
        for (int i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            b[abs(x)] += health[i];
        }

        int chk = 1;
        ll rem = 0;
        for (int i = 1; i <= n; ++i)
        {
            rem += k;  // these can be k bullets in each round
            if (rem < b[i])
            {
                chk = 0;
                break;
            }
            else rem -= b[i];
        }

        cout << (chk ? "YES" : "NO") << "\n";
    }

    return 0;
}