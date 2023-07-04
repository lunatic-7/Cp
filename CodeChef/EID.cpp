#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void eid()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int mini = abs(arr[0] - arr[1]);
    for (int i = 0; i < n - 1; i++)
    {
        mini = min(mini, abs(arr[i] - arr[i + 1]));
    }
    
    cout << mini << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        eid();
    }
    
    return 0;
}