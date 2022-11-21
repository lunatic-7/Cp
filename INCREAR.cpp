#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void resp()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << "\n";
    }
    else if (b > a)
    {
        cout << b - a << "\n";
    }
    else
    {
        if ((a - b) % 2 == 0)
        {
            cout << (a - b) / 2 << "\n";
        }
        else
        {
            cout << ((a - b  + 1) / 2) + 1 << "\n";
        }
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        resp();
    }
    
    return 0;
}