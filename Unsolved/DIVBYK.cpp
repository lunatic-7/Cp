// WRONG ANSWER
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void good()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    int chk = 0;
    ll mul = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            mul += (arr[i] % 1000000007);
            if (mul % k == 0)
            {
                chk = 1;
                break;
            }
        }
        else if (((mul * arr[i]) % 1000000007) % k == 0)
        {
            chk = 1;
            break;
        }
        else
        {
            mul = (mul * arr[i]) % 1000000007;
        }
    }

    if (chk)
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
        good();
    }
    
    return 0;
}