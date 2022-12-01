#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void tat()
{
    string s;
    cin >> s;
    int c1 = 0;
    int c0 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            c1++;
        }
        else
        {
            c0++;
        }
        
        if (c1 >= 10 && c0 >= 10)
        {
            if (c1 - c0 == 2)
            {
                cout << "WIN" << "\n";
                break;
            }
            else if (c0 - c1 == 2)
            {
                cout << "LOSE" << "\n";
                break;
            }
        }
    }
    
    if (c1 < 10 || c0 < 10)
    {
        if (c1 > c0)
        {
            cout << "WIN" << "\n";
        }
        else
        {
            cout << "LOSE" << "\n";
        }
    }
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        tat();
    }
    
    return 0;
}