#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    double arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + 4);

    if (arr[0]/arr[1] == arr[2]/arr[3])
    {
        cout << "Possible" << "\n";
    }
    else
    {
        cout << "Impossible" << "\n";
    }
    
    return 0;
}