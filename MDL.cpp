#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dkhte()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mini = arr[0];
    int maxi = arr[0];

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    vector<int> trr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mini)
        {
            trr.push_back(arr[i]);
        }
        if (arr[i] == maxi)
        {
            trr.push_back(arr[i]);
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        cout << trr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        dkhte();
    }
    
    return 0;
}