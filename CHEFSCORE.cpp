#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mark()
{
    int n, x, y;
    cin >> n >> x >> y;

    if (y == 0)
    {
        cout << "YES" << "\n";
    }
    else if (x <= y)
    {
        if (y % x == 0)
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
        cout << "NO" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mark();
    }
    
    return 0;
}