#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void cs()
{
    int n;
    cin >> n;
    map<int, int> m;
    int temp;
    int chk = 1;

    for (int i = 0; i < (2 * n); i++)
    {
        cin >> temp;
        m[temp]++;
    }

    for (auto i : m)
    {
        if (i.second > 2)
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
        cs();
    }
    
    return 0;
}