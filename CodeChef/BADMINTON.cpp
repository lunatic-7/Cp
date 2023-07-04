#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void tle()
{
    ll n;
    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << 1 << "\n";
    }
    else if (n == 2)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << (n / 2) + 1 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        tle();
    }
    
    return 0;
}