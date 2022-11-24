#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void stock()
{
    int x, y, z;
    cin >> x >> y >> z;

    cout << x * z - x * y << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        stock();
    }
    
    return 0;
}