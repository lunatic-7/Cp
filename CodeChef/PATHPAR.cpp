#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void parity()
{
    ll n;
    int k;
    cin >> n >> k;

    if ((n % 2 != 0) && (k == 0))
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
    }
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        parity();
    }
    
    return 0;
}