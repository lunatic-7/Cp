#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    int xrr[3] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (xrr[brr[i] - 1] > arr[i] || xrr[brr[i] - 1] == 0)
        {
            xrr[brr[i] - 1] = arr[i];
        }
    }
    
    if (xrr[0] == 0 || xrr[1] == 0)
    {
        cout << xrr[2] << "\n";
    }
    else if (xrr[2] == 0)
    {
        cout << xrr[0] + xrr[1] << "\n";
    }
    else if (xrr[0] + xrr[1] < xrr[2])
    {
        cout << xrr[0] + xrr[1] << "\n";
    }
    else
    {
        cout << xrr[2] << "\n";
    }
    
    return 0;
}