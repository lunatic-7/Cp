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
    ll t;
    cin >> t;

    while (t--)
    {
    	ll a, b, c;
    	cin >> a >> b >> c;

    	ll one = (a + c) / a, two = (b + c) / b, ans = 0;

    	ans = one + two;
    	cout << ans << "\n";
    }
    return 0;
}