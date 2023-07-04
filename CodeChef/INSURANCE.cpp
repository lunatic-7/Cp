#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void rebate()
{
    int x, y;
    cin >> x >> y;

    if (y <= x)
    {
        cout << y << "\n";
    }
    else
    {
        cout << x << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        rebate();
    }
    
    return 0;
}