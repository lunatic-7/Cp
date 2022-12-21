#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void todu()
{
    ll k, l;
    cin >> k >> l;

    if (k % l == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << 1 << "\n";
    }    
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        todu();
    }
    
    return 0;
}