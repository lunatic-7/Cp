#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void strn()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    ll sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    if (sum % 2 == 0 && k == 1)
    {
        cout << "odd" << "\n";
    }
    else
    {
        cout << "even" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        strn();
    }
    
    return 0;
}