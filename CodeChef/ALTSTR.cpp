#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void bSub()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c0 = 0, c1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            c0++;
        }
        if (s[i] == '1')
        {
            c1++;
        }
    }
    
    if (c1 == 0 || c0 == 0)
    {
        cout << 1 << "\n";
    }
    else if (c0 == c1)
    {
        cout << c1 * 2 << "\n";
    }
    else if (c1 > c0)
    {
        cout << c0 * 2 + 1 << "\n";
    }
    else if (c0 > c1)
    {
        cout << c1 * 2 + 1 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        bSub();
    }
    
    return 0;
}