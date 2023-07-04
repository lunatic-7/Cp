#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chota()
{
    int arr[3];
    
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + 3);
    if (arr[0] == arr[1])
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chota();
    }
    
    return 0;
}