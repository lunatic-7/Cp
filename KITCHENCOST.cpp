#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void fresh()
{
    int n, x;
    cin >> n >> x;
    int arr[n], brr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            sum += brr[i];
        }
    }
    
    cout << sum << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        fresh();
    }
    
    return 0;
}