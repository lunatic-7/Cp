#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void setbna()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int maxi = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            maxi = max(maxi, count);
        }
        else if (arr[i] != arr[i + 1])
        {
            count = 1;
        }
    }
    
    cout << n - maxi << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        setbna();
    }
    
    return 0;
}