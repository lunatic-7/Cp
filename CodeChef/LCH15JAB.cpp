#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void cake()
{
    string s;
    cin >> s;
    map<char, int> m;
    int chk = 0;

    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    
    for (auto x : m)
    {
        if (s.size() % 2 == 0)
        {
            if (x.second == (s.size() / 2))
            {
                chk = 1;
                break;
            }
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
        cake();
    }
        
    return 0;
}