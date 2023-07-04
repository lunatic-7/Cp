#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void emul()
{
    int n;
    cin >> n;
    int arr[n];
    int chk = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            chk = 1;
        }
    }
    
    if (chk)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        emul();
    }
    
    return 0;
}