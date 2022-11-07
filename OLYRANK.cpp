#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void oly()
{
    int g1, s1, b1, g2, s2, b2;
    cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;

    if (g1 + s1 + b1 > g2 + s2 + b2)
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
        oly();
    }
    
    return 0;
}