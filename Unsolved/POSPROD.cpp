// UNSOLVED
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll fact(ll n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

void pos()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll cnt = 0;
    ll neg = 0, pos = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            pos++;
        }
        if (arr[i] < 0)
        {
            neg++;
        }
    }

    cnt = 
    cout << fact(n) << "\n";
    

    // cout << cnt << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        pos();
    }
    
    return 0;
}