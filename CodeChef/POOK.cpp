#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void poo()
{
    ll n;
    cin >> n;

    if (n == 2 || n == 3)
    {
        cout << n - 1 << "\n";
    }
    else
    {
        cout << n << "\n";
    }
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        poo();
    }
    
    return 0;
}