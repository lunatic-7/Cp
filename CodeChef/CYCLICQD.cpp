#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ang()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + c == 180 && b + d == 180)
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
        ang();
    }
    
    return 0;
}