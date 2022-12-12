#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void exor()
{
    string s1, s2;
    cin >> s1 >> s2;
    string ans = "";
    int s11 = 0, s10 = 0, s21 = 0, s20 = 0;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '0')
        {
            s10++;
        }
        else
        {
            s11++;
        }

        if (s2[i] == '0')
        {
            s20++;
        }
        else
        {
            s21++;
        }
    }
    
    int min1 = min(s10, s21);
    int min2 = min(s11, s20);
    int tot = min1 + min2;

    for (int i = 0; i < s1.size(); i++)
    {
        if (i < tot)
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
    }    

    cout << ans << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        exor();
    }
    
    return 0;
}