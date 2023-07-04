#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void pong()
{
    ll x, y, k;
    cin >> x >> y >> k;

    if (((x + y) / k) % 2 == 0)
    {
        cout << "Chef" << "\n";
    }
    else
    {
        cout << "Paja" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        pong();
    }
    
    return 0;
}