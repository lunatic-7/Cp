#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void girls()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int maxi = 0;
    for (int i = 0; i <= n - k; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            count += arr[j];
        }
        maxi = max(count, maxi);
        count = 0;
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
        girls();
    }
    
    return 0;
}