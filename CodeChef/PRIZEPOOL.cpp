#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void prize()
{
    int x, y;
    cin >> x >> y;

    cout << x * 10 + y * 90 << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        prize();
    }
    
    return 0;
}