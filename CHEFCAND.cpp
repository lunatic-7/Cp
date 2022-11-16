#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void toffee()
{
    double n, x;
    cin >> n >> x;

    if (n < x)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << ceil((n - x)/4) << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        toffee();
    }
    
    return 0;
}