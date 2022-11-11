#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chair()
{
    int x, y;
    cin >> x >> y;

    if (y <= x)
    {
        cout << x - y << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chair();
    }
    
    return 0;
}