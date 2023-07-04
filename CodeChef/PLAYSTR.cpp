#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void bina()
{
    int n;
    cin >> n;
    string s, r;
    cin >> s >> r;
    int c1 = 0 , c2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            c1++;
        }
        if (r[i] == '1')
        {
            c2++;
        }
    }

    if (c1 == c2)
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
        bina();
    }
    
    return 0;
}