#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void coupon()
{
    int x;
    cin >> x;

    if ((x * 0.1) >= 100)
    {
        cout << (x * 0.1) << "\n";
    }
    else
    {
        cout << 100 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        coupon();
    }
    
    return 0;
}