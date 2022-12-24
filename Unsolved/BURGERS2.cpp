// TLE
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void burg()
{
    ll x, y, n, r;
    cin >> x >> y >> n >> r;
    
    ll small = 0, big = 0, chk = 1;
    while (n > 0)
    {
        if (r - y >= x * (n - 1))
        {
            r = r - y;
            n--;
            big++;
        }
        else if (r >= x * n)
        {
            small += n;
            n -= n;
        }
        else
        {
            chk = 0;
            break;
        }
    }

    if (chk)
    {
        cout << small << " " << big << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        burg();
    }
    
    return 0;
}