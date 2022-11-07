#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chefCode()
{
    int x1, x2, y1, y2, z1, z2;
    cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

    if (x2 >= x1 && y2 >= y1 && z2 <= z1)
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
        chefCode();
    }
    
    return 0;
}