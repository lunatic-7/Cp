#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void lr()
{
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    set<int> se;

    se.insert(x);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            se.insert(++x);
        }
        else if (s[i] == 'L')
        {
            se.insert(--x);
        }
    }

    cout << se.size() << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        lr();
    }
    
    return 0;
}