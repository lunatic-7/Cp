#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);

        for (ll i = 0; i < n; ++i)
        {
        	cin >> arr[i];
        }

        ll lower, upper;
        ll ans = 0;
        pair<ll, ll> range = {arr[0] - x, arr[0] + x};

        for (ll i = 0; i < n; ++i)
        {
        	lower = arr[i] - x;
        	upper = arr[i] + x;

        	range = {max(range.F, lower), min(range.S, upper)};
        	if (range.S < range.F)
        	{
        		range.F = lower;
        		range.S = upper;
        		ans++;
        	}
        }

        cout << ans << "\n";
    }

    return 0;
}