#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void covid()
{
    double n, m;
    cin >> n >> m;

    cout << ceil(n / 2) * ceil(m / 2) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        covid();
    }
    
    return 0;
}