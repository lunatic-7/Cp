#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void goomba()
{
    int x, y, z;
    cin >> x >> y >> z;

    int time = y / x;
    if (z < time)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << z - time << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        goomba();
    }
    
    return 0;
}