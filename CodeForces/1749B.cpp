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
    	ll n;
    	cin >> n;
    	vector<ll> a(n), b(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        ll i = 0, j = n - 1, pts = 0;

        while (i <= j)
        {
            if (b[i] <= b[j])
            {
                pts += a[i];
                if (i != j) a[i + 1] += b[i];
                i++;
            }
            else
            {
                pts += a[j];
                if (i != j) a[j - 1] += b[j];
                j--;
            }
        }

        cout << pts << "\n";
    }
    return 0;
}