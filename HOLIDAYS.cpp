#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ved()
{
    int n, w;
    cin >> n >> w;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    reverse(arr, arr + n);

    int cnt = 0;
    int tot = 0;

    for (int i = 0; i < n; i++)
    {
        tot += arr[i];
        cnt++;
        if (tot >= w)
        {
            break;
        }
    }
    
    cout << n - cnt << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ved();
    }
    
    return 0;
}