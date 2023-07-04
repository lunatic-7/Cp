#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void weig()
{
    int w, x, y, z;
    cin >> w >> x >> y >> z;

    if (w == x || w == y || w == z)
    {
        cout << "YES" << "\n";
    }
    else if ((w == x + y) || (w == y + z) || (w == x + z))
    {
        cout << "YES" << "\n";
    }
    else if (w == x + y + z)
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
        weig();
    }
    
    return 0;
}