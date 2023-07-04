#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void isLand()
{
    int x, y, xr, yr, d;
    cin >> x >> y >> xr >> yr >> d;

    if (xr * d <= x && yr * d <= y)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        isLand();
    }
    
    return 0;
}