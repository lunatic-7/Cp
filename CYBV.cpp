#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void psy()
{
    ll n, k;
    cin >> n >> k;

    if (k < n)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << k / n << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        psy();
    }
    
    return 0;
}