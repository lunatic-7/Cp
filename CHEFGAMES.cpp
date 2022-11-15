#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void inOut()
{
    int arr[4];
    int chk = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == 1)
        {
            chk = 1;
            break;
        }
    }

    if (chk)
    {
        cout << "OUT" << "\n";
    }
    else
    {
        cout << "IN" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        inOut();
    }
    
    return 0;
}