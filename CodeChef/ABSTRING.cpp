#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ps()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    int chk = 0;

    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }

    for (auto x : m)
    {
        if (x.second % 2 == 0)
        {
            chk = 1;
        }
        else
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
        ps();
    }
    
    return 0;
}