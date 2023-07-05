// UNSOLVED
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mano()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int chk = 1;

    for (int i = 0; i < (2 * n) - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            chk = 0;
            break;
        }
    }

    if (chk)
    {
        cout << -1 << "\n";
    }
    
    
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        mano();
    }
    
    return 0;
}