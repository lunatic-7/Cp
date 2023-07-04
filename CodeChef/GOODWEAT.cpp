#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void good()
{
    int temp;
    int sun = 0;
    int rain = 0;

    for (int i = 0; i < 7; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            sun++;
        }
        else
        {
            rain++;
        }
    }

    if (sun > rain)
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
        good();
    }
    
    return 0;
}