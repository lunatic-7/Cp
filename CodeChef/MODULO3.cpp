#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void e2()
{
    ll a, b;
    cin >> a >> b;

    if (a % 3 == 0 || b % 3 == 0)
    {
        cout << 0 << "\n";
    }
    else if (abs(a - b) % 3 == 0)
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
        e2();
    }
    
    return 0;
}