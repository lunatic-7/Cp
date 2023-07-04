#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void enso()
{
    int N;
    cin >> N;
    int arr[N];
    int imin = 0;
    int imax = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // Find index of min and max element
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < N; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            imin = i;
        }
        if (max < arr[i])
        {
            max = arr[i];
            imax = i;
        }
    }

    if (imin == 0 && imax == N - 1)
    {
        cout << 0 << "\n";
    }
    else if (imin < imax)
    {
        cout << ((N - 1) - imax) + imin << "\n";
    }
    else if (imin > imax)
    {
        cout << ((N - 1) - imax) + (imin - 1) << "\n";
    }   
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        enso();
    }
    
    return 0;
}