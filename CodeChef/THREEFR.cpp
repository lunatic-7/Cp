#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dkhte()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (abs(y + z) == abs(x) || abs(y - z) == abs(x))
    {
        cout << "yes" << "\n";
    }
    else
    {
        cout << "no" << "\n";
    } 
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        dkhte();
    }
    
    return 0;
}