#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void cars()
{
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    reverse(arr, arr + n);
    
    ll profit = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] - i > 0)
        {
            profit += arr[i] - i;
        }
    }

    cout << profit % 1000000007 << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        cars();
    }
    
    return 0;
}