#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void party()
{
    ll n;
    cin >> n;
    ll arr[n];

    ll even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
    }

    if (even == n || even == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << even << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        party();
    }
    
    return 0;
}