#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void rrr()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;

    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    
    int maxi = 0;
    for (auto x : m)
    {
        maxi = max(maxi, x.second);
    }

    cout << n - maxi << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        rrr();
    }
    
    return 0;
}