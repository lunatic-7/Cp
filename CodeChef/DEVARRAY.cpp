#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    ll n, q;
    cin >> n >> q;
    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int que;
    sort(arr, arr + n);
    for (int i = 0; i < q; i++)
    {
        cin >> que;
        if (que >= arr[0] && que <= arr[n - 1])
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}