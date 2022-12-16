#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void rect()
{
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + 4);

    int i = 0, chk = 0;
    while (i < 4)
    {
        if (arr[i] == arr[i + 1])
        {
            chk = 1;
            i += 2;
        }
        else
        {
            chk = 0;
            break;
        }   
    }
    
    if (chk)
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
        rect();
    }
    
    return 0;
}