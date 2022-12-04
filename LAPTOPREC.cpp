#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void lion()
{
    int n;
    cin >> n;
    int arr[n];
    int swi = 1;
    int v[11] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        v[arr[i]]++;
    }

    int temp[11];
    temp[0] = 0;
    for (int i = 1; i < 11; i++)
    {
        temp[i] = v[i];
    }

    sort(v, v + 11);

    if (n > 1)
    {
        if (v[11 - 1] == v[11 - 2])
        {
            swi = 0;
        }
    }

    if (swi)
    {
        for (int i = 0; i < 11; i++)
        {
            if (temp[i] == v[11 - 1])
            {
                cout << i << "\n";
            }
        }
    }
    else
    {
        cout << "CONFUSED" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        lion();
    }
    
    return 0;
}