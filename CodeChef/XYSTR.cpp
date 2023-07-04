#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void paire()
{
    string s;
    cin >> s;
    int count = 0;

    int i = 0;
    while (i < s.size() - 1)
    {
        if ((s[i] == 'x' && s[i + 1] == 'y') || (s[i] == 'y' && s[i + 1] == 'x'))
        {
            i+=2;
            count++;
        }
        else
        {
            i++;
        }
    }
    
    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        paire();
    }
    
    return 0;
}