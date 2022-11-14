#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ab()
{
    int a, b;
    cin >> a >> b;

    if (a >= b)
    {
        cout << 7 - a << "\n";
    }
    else
    {
        cout << 7 - b << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ab();
    }
    
    return 0;
}