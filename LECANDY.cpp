#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void zoo()
{
    ll n, c;
    cin >> n >> c;
    ll arr[n];
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    if (sum > c)
    {
        cout << "No" << "\n";
    }
    else
    {
        cout << "Yes" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        zoo();
    }
    
    return 0;
}