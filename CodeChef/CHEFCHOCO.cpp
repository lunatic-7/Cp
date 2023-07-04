#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void choco()
{
    int c, x, y;
    cin >> c >> x >> y;

    cout << y * (c - x) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        choco();
    }
    
    return 0;
}