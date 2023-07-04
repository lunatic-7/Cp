#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void rooms()
{
    int x, y;
    cin >> x >> y;

    if (x * 3 <= y * 2)
    {
        cout << x * 3 << "\n";
    }
    else
    {
        cout << y * 2 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        rooms();
    }
     
    return 0;
}