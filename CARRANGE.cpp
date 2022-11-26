#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void fuel()
{
    int p, m, v;
    cin >> p >> m >> v;

    cout << v * (m - (p - 1)) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        fuel();
    }
    
    return 0;
}