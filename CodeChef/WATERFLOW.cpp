#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void over()
{
    int w, x, y, z;
    cin >> w >> x >> y >> z;

    if (w + (y * z) > x)
    {
        cout << "OVERFLOW" << "\n";
    }
    else if (w + (y * z) == x)
    {
        cout << "FILLED" << "\n";
    }
    else
    {
        cout << "UNFILLED" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        over();
    }
    
    return 0;
}