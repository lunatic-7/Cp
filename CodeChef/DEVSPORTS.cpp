#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void water()
{
    int z, y, a, b, c;
    cin >> z >> y >> a >> b >> c;
    int left = z - y;

    if (left >= a + b + c)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        water();
    }
    
    return 0;
}