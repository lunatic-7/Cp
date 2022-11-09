#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mario()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    string s1;
    string s2;

    for (int i = 0; i < n/2; i++)
    {
        s1.push_back(s[i]);
    }
    
    for (int i = n/2; i < n; i++)
    {
        s2.push_back(s[i]);
    }

    if (s2 + s1 == s)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mario();
    }
    
    return 0;
}