#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void gym()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x + y <= z)
    {
        cout << 2 << "\n";
    }
    else if (x <= z)
    {
        cout << 1 << "\n";
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
        gym();
    }
    
    return 0;
}