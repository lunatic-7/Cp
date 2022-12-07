// NOT SOLVED
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void lbs()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int count = 1;
    map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            m[to_string(count) + s[i]]++;
        }
        else if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            m[to_string(count) + s[i]]++;
            count = 1;
        }    
    }
    
    int maxi = 0;
    char ans;
    for (auto x : m)
    {
        // cout << x.first << "\n";
        maxi = max(maxi, x.second);
        if (x.second == maxi)
        {
            ans = x.first[0];
        }
    }

    if (maxi == 1 && ans == '1')
    {
        cout << 0 << "\n";
    }
    else if (maxi == 1 && ans != '1')
    {
        cout << (ans - '0') - 1 << "\n";
    }   
    else if ((ans - '0') > maxi)
    {
        cout << ans << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        lbs();
    }
    
    return 0;
}