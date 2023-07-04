#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sale()
{
    int x;
    cin >> x;

    if (x <= 100)
    {
        cout << x << "\n";
    }
    else if (x > 100 && x <= 1000)
    {
        cout << x - 25 << "\n";
    }
    else if (x > 1000 && x <= 5000)
    {
        cout << x - 100 << "\n";
    }
    else
    {
        cout << x - 500 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        sale();
    }
    
    return 0;
}