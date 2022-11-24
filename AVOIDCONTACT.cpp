#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void room()
{
    int x, y;
    cin >> x >> y;

    if (x == y)
    {
        cout << (y * 2) - 1 << "\n";
    }
    else
    {
        cout << (x - y) + (2 * y) << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        room();
    }
     
    return 0;
}