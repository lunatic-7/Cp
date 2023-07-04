#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void abd()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b)
    {
        if (a < c)
        {
            cout << "Draw" << "\n";
        }
        else
        {
            cout << "Alice" << "\n";
        }
    }
    else if (b < a)
    {
        if (b < c)
        {
            cout << "Bob" << "\n";
        }
        else
        {
            cout << "Alice" << "\n";
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
        abd();
    }
    
    return 0;
}