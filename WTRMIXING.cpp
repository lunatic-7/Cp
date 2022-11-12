#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void water()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a == b)
    {
        cout << "YES" << "\n";
    }
    else if (a < b)
    {
        if (a + x >= b)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    else
    {
        if (a - y <= b)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
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
        water();
    }
    
    return 0;
}