#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void twoTen()
{
    int x;
    cin >> x;

    if (x % 10 == 0)
    {
        cout << 0 << "\n";
    }
    else if (x % 5 == 0)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        twoTen();
    }
    
    return 0;
}