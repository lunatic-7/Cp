#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll por2(ll n)
{
    ll temp = 0;
    ll i = 0;
    while (1)
    {
        temp = pow(2, i);
        if (temp > n)
        {
            break;
        }
        i++;
    }
    
    return i;
}

void p2()
{
    ll n;
    cin >> n;

    ll count = 0;
    while (pow(2, (por2(n) - 1)) != n)
    {
        n = n - pow(2, (por2(n) - 1));
        count++;
    }

    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        p2();
    }
    
    return 0;
}