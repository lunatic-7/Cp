#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void amount()
{
    int w, x, y, z;
    cin >> w >> x >> y >> z;

    cout << w + (x * z) - (y * z) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        amount();
    }
    
    return 0;
}