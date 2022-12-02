#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void magic()
{
    int n, x, s;
    cin >> n >> x >> s;
    int coin = x;
    int arr1[s], arr2[s];

    for (int i = 0; i < s; i++)
    {
        cin >> arr1[i] >> arr2[i];
        if (arr1[i] == coin)
        {
            coin = arr2[i];
        }
        else if (arr2[i] == coin)
        {
            coin = arr1[i];
        }
    }
    
    cout << coin << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        magic();
    }
    
    return 0;
}