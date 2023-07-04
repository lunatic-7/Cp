#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chef()
{
    int n, k;
    cin >> n >> k;
    int arr[n + k];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n; i < n + k; i++)
    {
        arr[i] = 1000;
    }

    sort(arr, arr + n + k);

    cout << arr[(n + k)/2] << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chef();
    }
    
    return 0;
}