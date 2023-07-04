#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void game()
{
    ll n;
    cin >> n;
    ll arr[n];
    map<int, int> m;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    
    int maxi = 0;
    for (auto x : m)
    {
        maxi = max(x.second, maxi);
    }
    
    cout << n - maxi << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        game();
    }
    
    return 0;
}