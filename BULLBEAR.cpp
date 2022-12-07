#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void pln()
{
    int x, y;
    cin >> x >> y;

    if (y > x)
    {
        cout << "PROFIT" << "\n";
    }
    else if (y < x)
    {
        cout << "LOSS" << "\n";
    }
    else
    {
        cout << "NEUTRAL" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        pln();
    }
    
    return 0;
}