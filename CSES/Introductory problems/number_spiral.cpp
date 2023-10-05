#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;


// SEEN
// From here: https://www.youtube.com/watch?v=zRfbyPLcWlY
int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll x, y;
    	cin >> x >> y;
        ll ans = 0;

        if (x < y)  // Agar column bda hai row se
        {
            if (y & 1) ans = (y * y) - x + 1;  // Agar column odd hai
            else ans = ((y - 1) * (y - 1)) + x;  // If even
        }
        else
        {
            if (x & 1) ans = ((x - 1) * (x - 1)) + y;
            else ans = (x * x) - y + 1;
        }

        cout << ans << "\n";
    }
    return 0;
}