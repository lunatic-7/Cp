#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void room()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    int maxi = x;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        x += arr[i];
        maxi = max(maxi, x);
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
        room();
    }
    
    return 0;
}