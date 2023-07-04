#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void gridy()
{
    int x, y;
    cin >> x >> y;

    if ((abs(x) % 2 == 0 && abs(y) % 2 == 0) || (abs(x) % 2 != 0 && abs(y) % 2 != 0))
    {
        cout << "YES" << "\n";
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
        gridy();
    }
    
    return 0;
}