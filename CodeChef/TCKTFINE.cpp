#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ticket()
{
    int x, p, q;
    cin >> x >> p >> q;

    cout << x * (p - q) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ticket();
    }
    
    return 0;
}