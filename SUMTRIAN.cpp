#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ulta()
{
    int n;
    cin >> n;
    // Take  elements in square matrix
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Move upwards from last second row adding max of from two of it's linked elements from next (last) row.
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            arr[i][j] += max(arr[i + 1][j], arr[i + 1][j + 1]);
        }
    }
    
    cout << arr[0][0] << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ulta();
    }
    
    return 0;
}