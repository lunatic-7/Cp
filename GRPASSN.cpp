#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void gp()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    int temp;
    int chk = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        m[temp]++;
    }

    for (auto x : m)
    {
        if (x.second % x.first != 0)
        {
            chk = 0;
            break;
        }
    }

    if (chk)
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
        gp();
    }
    
    return 0;
}