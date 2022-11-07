#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void placement()
{
    char f, s, t, x, y;
    cin >> f >> s >> t >> x >> y;

    if (x == f || y == f)
    {
        cout << f << "\n";
    }
    else if (x == s || y == s)
    {
        cout << s << "\n";
    }
    else
    {
        cout << t << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        placement();
    }
    
    return 0;
}