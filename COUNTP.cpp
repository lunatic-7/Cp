#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void buddha()
{
    int n;
    cin >> n;
    ll arr[n];
    int oc = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            oc++;
        }
    }

    if (oc == 0)
    {
        cout << "NO" << "\n";
    }
    else if (oc % 2 == 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        buddha();
    }
    
    return 0;
}