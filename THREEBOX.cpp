#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void bags()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + b + c <= d)
    {
        cout << 1 << "\n";
    }
    else if (a + b <= d)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 3 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        bags();
    }
    
    return 0;
}