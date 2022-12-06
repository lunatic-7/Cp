#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void pss()
{
    int n, a, b;
    cin >> n >> a >> b;
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

    cout << (c0 * a) + (c1 * b) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        pss();
    }
    
    return 0;
}