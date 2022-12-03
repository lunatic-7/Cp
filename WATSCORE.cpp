#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void score()
{
    int n;
    cin >> n;
    int p, s;
    map<int, int> m;
    int sc = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> s;
        if (p < 9 && s > m[p])
        {
            m[p] = s;
        }
    }
    
    for (auto x : m)
    {
        sc += x.second;
    }

    cout << sc << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        score();
    }
    
    return 0;
}