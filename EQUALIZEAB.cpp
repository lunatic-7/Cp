#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sanduja()
{
    int a, b, x;
    cin >> a >> b >> x;

    if (abs(a - b) % (2 * x) == 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        sanduja();
    }
    
    return 0;
}