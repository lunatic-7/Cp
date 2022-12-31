#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void santa()
{
    ll n;
    cin >> n;
    ll arr[n][n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            arr[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if ((i > 1) && (j > 0) && (j < i))
            {
                cout << arr[i - 1][j - 1] + arr[i - 1][j] << " ";
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        santa();
    }
    
    return 0;
}