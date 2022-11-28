#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ghar()
{
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    ll ind = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < x)
        {
            ind = i + 1;
        }
    }

    cout << ind << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ghar();
    }
    
    return 0;
}