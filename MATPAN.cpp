#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void pangram()
{
    map<char, int> m;
    int temp;
    string s;

    for (int i = 0; i < 26; i++)
    {
        cin >> temp;
        m['a' + i] = temp;
    }
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        m.erase(s[i]);
    }

    int tot = 0;
    for (auto x : m)
    {
        tot += x.second;
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
        pangram();
    }
    
    return 0;
}