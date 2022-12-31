#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            cout << "\n";
        }
        else
        {
            int c = s[i];
            s[i] = toupper(c);
            cout << s[i];
        }
    }
    
    return 0;
}