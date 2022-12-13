#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void coin()
{
    int g;
    cin >> g;
    int i, n, q;

    while (g--)
    {
        cin >> i >> n >> q;
        if (n % 2 == 0)
        {
            cout << n / 2 << "\n";
        }
        else if (i == q)
        {
            cout << (n / 2) << "\n";
        }
        else
        {
            cout << (n / 2) + 1 << "\n";
        }
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