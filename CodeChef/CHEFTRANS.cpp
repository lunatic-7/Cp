#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chefLand()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x + y < z)
    {
        cout << "PLANEBUS" << "\n";
    }
    else if (z < x + y)
    {
        cout << "TRAIN" << "\n";
    }
    else
    {
        cout << "EQUAL" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chefLand();
    }
    
    return 0;
}