#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void jack()
{
    int a, b;
    cin >> a >> b;

    if (21 - (a + b) <= 10)
    {
        cout << 21 - (a + b) << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        jack();
    }
    
    return 0;
}