#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void guitar()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        count += abs(arr[i + 1] - arr[i]) - 1;
    }

    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        guitar();
    }
    
    return 0;
}