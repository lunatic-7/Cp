#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void axby()
{
    double a, x, b, y;
    cin >> a >> x >> b >> y;

    if (a/x > b/y)
    {
        cout << "ALICE" << "\n";
    }
    else if (b/y > a/x)
    {
        cout << "BOB" << "\n";
    }
    else
    {
        cout << "EQUAL" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        axby();
    }
    
    return 0;
}