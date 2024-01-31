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
    ll n;
    cin >> n;
    ll b[n];

    for (int i = 0; i < n; ++i)
    {
    	cin >> b[i];
    }

    sort(b, b + n);
    ll mini = b[0], maxi = b[n - 1];
    ll diff = maxi - mini;
    ll lo = 0, hi = 0;
    for (int i = 0; i < n; ++i)
    {
    	if (b[i] == mini) lo++;
    	if (b[i] == maxi) hi++;
    }

    ll ways = lo * hi;
    if (mini == maxi)
    {
    	ways = (n * (n - 1)) / 2;
    }

    cout << diff << " " << ways << "\n";
    return 0;
}