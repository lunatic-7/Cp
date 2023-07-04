#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void adq()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    int tot = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        tot += arr[i];
    }

    int mini = arr[0];
    for (int i = 0; i < n; i++)
    {
        mini = min(arr[i], mini);
    }
    
    if ((tot / x) == ((tot - mini) / x))
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << tot / x << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        adq();
    }
    
    return 0;
}