#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void cho()
{
    int X, Y;
    cin >> X >> Y;

    if (X * 2 > Y * 5)
    {
        cout << "CHOCOLATE" << "\n";
    }
    else if (X * 2 < Y * 5)
    {
        cout << "CANDY" << "\n";
    }
    else
    {
        cout << "EITHER" << "\n";
    }    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        cho();
    }
    
    return 0;
}