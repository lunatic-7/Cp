#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void car()
{
    double x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    if (y1/x1 < y2/x2)
    {
        cout << -1 << "\n";
    }
    else if (y1/x1 > y2/x2)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        car();
    }
    
    return 0;
}