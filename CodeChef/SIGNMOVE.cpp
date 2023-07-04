#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void cordi()
{
    int n;
    cin >> n;
    int cord = 0;

    if (n % 2 == 0)
    {
        cout << n / 2 << "\n";
    }
    else
    {
        cout << -1 * ((n / 2) + 1) << "\n";
    }
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        cordi();
    }
    
    return 0;
}