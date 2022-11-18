#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void app()
{
    int s, x, y, z;
    cin >> s >> x >> y >> z;
    int sum = x + y;
    int maxi = max(x, y);
    
    if (s - sum >= z)
    {
        cout << 0 << "\n";
    }
    else if (s - (sum - maxi) >= z)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        app();
    }
    
    return 0;
}