// TLE
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const ll N = 1e5+10;
ll n, m;
ll arr[N];

void binary(ll y)
{
    ll lo = 0, hi = n - 1, mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if ((arr[mid] + y) % m > y)
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }

    if ((arr[hi] + y) % m >= y)
    {
        cout << arr[hi] + y << "\n";
    }
    else
    {
        cout << arr[lo] + y << "\n";
    }
}

int main()
{
    wasif();
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] % m;
    }
    sort(arr, arr + n);
    
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll y = x % m;
        binary(y);
    }
    
    return 0;
}