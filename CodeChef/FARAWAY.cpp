#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void away()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    ll dist = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        dist += max(abs(m - arr[i]), abs(arr[i] - 1));
    }
    
    cout << dist << "\n";
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        away();
    }
        
    return 0;
}