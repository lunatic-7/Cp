#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ndt()
{
    int n, x;
    cin >> n >> x;

    cout << x % (n + 1) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ndt();
    }
    
    return 0;
}