#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ab()
{
    string s;
    cin >> s;
    int a = 0;
    int b = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    
    cout << min(a, b) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ab();
    }
    
    return 0;
}