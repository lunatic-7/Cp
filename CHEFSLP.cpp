#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chappal()
{
    int n, l, x;
    cin >> n >> l >> x;

    cout << x * min(l, n - l) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chappal();
    }
    
    return 0;
}