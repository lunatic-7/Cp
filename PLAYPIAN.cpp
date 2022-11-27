#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void piano()
{
    string s;
    cin >> s;
    int chk = 1;

    for (int i = 0; i < s.size() - 1; i+=2)
    {
        if ((s[i] == 'A' && s[i + 1] == 'A') || (s[i] == 'B' && s[i + 1] == 'B'))
        {
            chk = 0;
            break;
        }
    }

    if (chk)
    {
        cout << "yes" << "\n";
    }
    else
    {
        cout << "no" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        piano();
    }
    
    return 0;
}