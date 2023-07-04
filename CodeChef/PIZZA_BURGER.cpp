#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ashish()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if (Y <= X)
    {
        cout << "PIZZA" << "\n";
    }
    else if (Z <= X)
    {
        cout << "BURGER" << "\n";
    }
    else
    {
        cout << "NOTHING" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ashish();
    }
    
    return 0;
}