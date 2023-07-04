#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void friends()
{
    string s;
    cin >> s;
    ll cnt = 0;

    for (ll i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '0')
        {
            cnt++;
        }
    }
    
    if (s[s.size() - 1] == '1')
    {
        cnt++;
    }
    
    cout << cnt << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        friends();
    }
    
    return 0;
}