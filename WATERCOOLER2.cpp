#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void code()
{
    int x, y;
    cin >> x >> y;

    if (x > y)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << (y - 1) / x << "\n";
    }
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        code();
    }
    
    return 0;
}