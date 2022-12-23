#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void party()
{
    string s;
    cin >> s;

    ll i = 0;
    while (i < s.size() - 4)
    {
        if (s[i] == 'p' && s[i + 1] == 'a' && s[i + 2] == 'r' && s[i + 3] == 't' && s[i + 4] == 'y')
        {
            s[i + 2] = 'w';
            s[i + 3] = 'r';
            s[i + 4] = 'i';
            i += 5;
        }
        else
        {
            i++;
        }
    }

    cout << s << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        party();
    }
    
    return 0;
}