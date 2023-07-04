#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chess()
{
    int a, b;
    cin >> a >> b;

    if (a + b < 3)
    {
        cout << 1 << "\n";
    }
    else if (a + b >= 3 && a + b <= 10)
    {
        cout << 2 << "\n";
    }
    else if (a + b >= 11 && a + b <= 60)
    {
        cout << 3 << "\n";
    }
    else
    {
        cout << 4 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chess();
    }
    
    return 0;
}