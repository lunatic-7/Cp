#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void cab()
{
    int X, Y;
    cin >> X >> Y;

    if (X < Y)
    {
        cout << "FIRST" << "\n";
    }
    else if (Y < X)
    {
        cout << "SECOND" << "\n";
    }
    else
    {
        cout << "ANY" << "\n";
    }   
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        cab();
    }
    
    return 0;
}