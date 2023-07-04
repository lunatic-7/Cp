#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void maat()
{
    string s;
    cin >> s;
    int chk = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (chk == 0)
        {
            if (s[i] == '1')
            {
                chk++;
            }
        }
        
        if (chk == 1 && i != s.size() - 1)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                chk++;
                break;
            }
        }
    }

    if (chk == 2 || chk == 0)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        maat();
    }
    
    return 0;
}