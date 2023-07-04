#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void lazy()
{
    int x, m, d;
    cin >> x >> m >> d;

    if ((x * m) < (x + d))
    {
        cout << x * m << "\n";
    }
    else
    {
        cout << x + d << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        lazy();
    }
    
    return 0;
}