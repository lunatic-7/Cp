#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void work()
{
    int d, x, y, z;
    cin >> d >> x >> y >> z;
    int st1 = x * 7;
    int st2 = (y * d) + (z * (7 - d));

    cout << max(st1, st2) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        work();
    }
    
    return 0;
}