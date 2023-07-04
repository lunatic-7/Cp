#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void cd()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (z % x == 0 && z % y == 0)
    {
        cout << "ANY" << "\n";
    }
    else if (z % x == 0)
    {
        cout << "CHICKEN" << "\n";
    }
    else if (z % y == 0)
    {
        cout << "DUCK" << "\n";
    }
    else
    {
        cout << "NONE" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        cd();
    }
    
    return 0;
}