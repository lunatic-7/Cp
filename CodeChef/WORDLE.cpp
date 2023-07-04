#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void good()
{
    string g, b;
    cin >> g >> b;

    for (int i = 0; i < 5; i++)
    {
        if (g[i] == b[i])
        {
            cout << "G";
        }
        else
        {
            cout << "B";
        }
    }
    cout << "\n";
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