#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void jewel()
{
    string s;
    cin >> s;
    map<char, double> m;

    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    
    int tot = 0;
    for (auto x : m)
    {
        tot += ceil(x.second / 2);
    }
    
    cout << tot << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        jewel();
    }
    
    return 0;
}