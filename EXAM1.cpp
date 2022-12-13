#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sawal()
{
    int n;
    cin >> n;
    string s, u;
    cin >> s >> u;
    int pnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (u[i] == 'N')
        {
            continue;
        }
        else if (s[i] == u[i])
        {
            pnt++;
        }
        else if (s[i] != u[i])
        {
            i++;
        }
    }
    
    cout << pnt << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        sawal();
    }
    
    return 0;
}