#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sevvv()
{
    string s, ans;
    cin >> s;
    int cnt = 0, swi = 0;
    string temp;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'f' || s[i] == 'r' || s[i] == 'e' || s[i] == 'i' || s[i] == 'z' || s[i] == 'a')
        {
            if (swi == 2)
            {
                temp = to_string(cnt);
                ans += temp;
                cnt = 0;
                cnt++;
                swi = 1;
            }
            else
            {
                cnt++;
                swi = 1;
            }
        }
        else
        {
            if (swi == 1)
            {
                temp = to_string(cnt);
                ans += temp;
                cnt = 0;
                cnt++;
                swi = 2;
            }
            else
            {
                cnt++;
                swi = 2;
            }
        }
    }

    temp = to_string(cnt);
    ans += temp;

    cout << ans << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        sevvv();
    }
    
    return 0;
}