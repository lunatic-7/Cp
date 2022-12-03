#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void hole()
{
    string s;
    cin >> s;
    map<char, int> m;
    int count = 0;

    for (char i = 'A'; i <= 'Z'; i++) {
        if (i == 'A' || i == 'D' || i == 'O' || i == 'P' || i == 'Q' || i == 'R')
        {
            m[i] = 1;
        }
        else if (i == 'B')
        {
            m[i] = 2;
        }
        else
        {
            m[i] = 0;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        count += m[s[i]];    
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
        hole();
    }
    
    return 0;
}