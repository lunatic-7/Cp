#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void fns()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        if (((r - l) + 1) % 2 != 0)
        {
            sum++;
        }
    }
    
    cout << sum << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        fns();
    }
    
    return 0;
}