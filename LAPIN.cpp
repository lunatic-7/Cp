#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void lap()
{
    string s, s1, s2;
    cin >> s;

    if (s.size() % 2 == 0)
    {
        for (int i = 0; i < s.size() / 2; i++)
        {
            s1.push_back(s[i]);
        }
        for (int i = s.size() / 2; i < s.size(); i++)
        {
            s2.push_back(s[i]);
        }        
    }
    else
    {
        for (int i = 0; i < s.size() / 2; i++)
        {
            s1.push_back(s[i]);
        }
        for (int i = (s.size() / 2) + 1; i < s.size(); i++)
        {
            s2.push_back(s[i]);
        } 
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int chk = 1;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
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
        lap();
    }
    
    return 0;
}