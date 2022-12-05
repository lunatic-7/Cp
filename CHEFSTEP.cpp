#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dis()
{
    ll n, k;
    cin >> n >> k;
    ll d[n];

    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (d[i] % k == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        dis();
    }
    
    return 0;
}