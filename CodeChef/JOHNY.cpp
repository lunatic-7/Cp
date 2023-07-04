#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll binarySearch(ll arr[], int n, ll chk)
{
    int low = 0;
    int high = n;
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == chk)
        {
            return mid + 1;
        }
        else if (arr[mid] < chk)
        {
            low = mid + 1;
        }
        else if (arr[mid] > chk)
        {
            high = mid - 1;
        }
    }
    
}

void cher()
{
    int n;
    cin >> n;
    ll arr[n];
    ll k, chk;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }

    cin >> k;
    chk = arr[k-1];
    sort(arr, arr + n);

    cout << binarySearch(arr, n, chk) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        cher();
    }
    
    return 0;
}