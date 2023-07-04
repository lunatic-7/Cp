#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void frame()
{
    int n, m, x;
    cin >> n >> m >> x;

    cout << x * ((2 * n) + (2 * m)) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        frame();
    }
     
    return 0;
}