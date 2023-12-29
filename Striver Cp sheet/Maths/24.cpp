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
    ll x, y, z;
    cin >> x >> y >> z;

    ll remainx = x % z;
    ll remainy = y % z;

    ll ans1 = 0, ans2 = 0;
    ans1 += x / z;
    ans1 += y / z;

    if (remainx + remainy >= z) 
    {
    	ans2 = z - max(remainx, remainy);
    	ans1 += (remainx + remainy) / z;
    }

    cout << ans1 << " " << ans2 << "\n";

    return 0;
}