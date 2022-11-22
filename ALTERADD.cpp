#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ab()
{
    ll a, b;
    cin >> a >> b;

    ll i = 1;
    while (a < b)
    {
        if (i % 2 != 0)
        {
            a++;
        }
        else
        {
            a+=2;
        }
        i++;
    }
    
    if (a == b)
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
        ab();
    }
    
    return 0;
}