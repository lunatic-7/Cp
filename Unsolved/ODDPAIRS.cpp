// UNSOLVED

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void odpair()
{
    ll N;
    cin >> N;
    ll arr[N];

    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }
    
    ll count = 0;
    for (ll i = 0; i < N - 1; i++)
    {
        for (ll j = i + 1; j < N; j++)
        {
            if ((arr[i] % 2 != 0) && (arr[j] % 2 == 0))
            {
                count += 2;
            }
            else if ((arr[i] % 2 == 0) && (arr[j] % 2 != 0))
            {
                count += 2;
            }
        }
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
        odpair();
    }
    
    return 0;
}