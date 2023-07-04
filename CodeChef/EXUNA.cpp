// NOT SOLVED
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void taser()
{
    ll n;
    cin >> n;
    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // Method 1
    ll mini = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        mini = min(mini, arr[i + 1]);
    }
    cout << mini << "\n";

    // Method 2    
    // ll modu = arr[0];
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if ((modu % arr[i + 1]) > (arr[i + 1] % modu))
    //     {
    //         modu = modu % arr[i + 1];
    //     }
    //     else
    //     {
    //         modu = arr[i + 1] % modu;
    //     }
    // }
    // cout << modu << "\n";    
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        taser();
    }
    
    return 0;
}