#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mayor()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + c >= b)
    {
        cout << a + c << "\n";
    }
    else
    {
        cout << b << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mayor();
    }
    

    return 0;
}