#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sol()
{
    int x, a, b;
    cin >> x >> a >> b;

    cout << (a + (100 - x) * b) * 10 << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        sol();
    }
    
    return 0;
}