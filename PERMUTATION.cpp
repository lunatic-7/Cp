#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void prem()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        count += (i + 1) - arr[i];
        if (arr[i] > i + 1)
        {
            count = -1;
            break;
        }
    }
    
    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        prem();
    }
    
    return 0;
}