#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void gp()
{
    ll n, x;
    cin >> n >> x;

    ll tot = 2 * n;

    cout << tot - (x - 1) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        gp();
    }
    
    return 0;
}