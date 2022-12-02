#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n, q;
    cin >> n >> q;
    ll arr1[n];
    ll arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    
    ll ans = 0;
    for (int i = 0; i < q; i++)
    {
        int temp1, temp2;
        ans = 0;
        cin >> temp1 >> temp2;
        for (int j = temp1 - 1; j < temp2; j++)
        {
            ans += arr1[j] * arr2[j];
        }
        cout << ans << "\n";
    }
    
    return 0;
}