#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void race()
{
    ll x1, x2;
    cin >> x1 >> x2;

    if (x1 < x2)
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
        race();
    }
    
    return 0;
}