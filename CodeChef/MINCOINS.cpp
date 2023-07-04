#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void coin()
{
    int x;
    cin >> x;

    if (x % 5 == 0)
    {
        if (x % 10 == 0)
        {
            cout << x / 10 << "\n";
        }
        else
        {
            x = x - 5;
            cout << (x / 10) + 1 << "\n";
        }
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
        coin();
    }
    
    return 0;
}