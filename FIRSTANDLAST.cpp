#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sagar()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = arr[0] + arr[n - 1];

    for (int i = 0; i < n - 1; i++)
    {
        maxi = max(maxi, arr[i] + arr[i + 1]);
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
        sagar();
    }
    
    return 0;
}