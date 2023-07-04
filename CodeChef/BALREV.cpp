#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void lexo()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    cout << s << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        lexo();
    }
    
    return 0;
}