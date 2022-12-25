#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void gbd()
{
    string s;
    cin >> s;
    int chk = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') || (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0'))
        {
            chk = 1;
            break;
        }
    }

    if (chk)
    {
        cout << "Good" << "\n";
    }
    else
    {
        cout << "Bad" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        gbd();
    }
    
    return 0;
}