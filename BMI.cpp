#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void bm()
{
    int m, h;
    cin >> m >> h;

    int res = m/pow(h, 2);
    if (res <= 18)
    {
        cout << 1 << "\n";
    }
    else if (res >= 19 && res <= 24)
    {
        cout << 2 << "\n";
    }
    else if (res >= 25 && res <= 29)
    {
        cout << 3 << "\n";
    }
    else
    {
        cout << 4 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        bm();
    }
    
    return 0;
}