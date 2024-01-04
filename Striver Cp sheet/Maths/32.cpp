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
    ll n, m, a;
    cin >> n >> m >> a;

    ll x1, x2;
    if (n % a == 0) x1 = n / a;
    else x1 = (n / a) + 1;

    if (m % a == 0) x2 = m / a;
    else x2 = (m / a) + 1;

    cout << x1 * x2 << "\n";
    return 0;
}