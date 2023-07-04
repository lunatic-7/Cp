#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void football()
{
    int n;
    cin >> n;
    int arr[n], brr[n];
    int count;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        count = (arr[i] * 20) - (brr[i] * 10);
        maxi = max(maxi, count);
    }
    
    cout << maxi << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        football();
    }
    
    return 0;
}