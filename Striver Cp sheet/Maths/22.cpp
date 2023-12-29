#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    ll n, m, k;
    cin >> n >> m >> k;

    ll arr[n];

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    sort(arr, arr + n);
    int temp = m / (k + 1);

    ll ans = (temp * arr[n-2]) + ((m - temp) * arr[n-1]); 

    cout << ans << "\n";
    return 0;
}