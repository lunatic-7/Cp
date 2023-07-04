#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mano()
{
    int x, y, z;
    cin >> x >> y >> z;

    cout << ((x * 5) + (y * 10))/z << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mano();
    }
    
    return 0;
}