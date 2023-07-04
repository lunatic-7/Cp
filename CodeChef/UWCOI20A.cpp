#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void hei()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << arr[n - 1] << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        hei();
    }
    
    return 0;
}