#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void stairs()
{
    int X, Y;
    cin >> X >> Y;

    if (X < Y)
    {
        cout << X << "\n";
    }
    else
    {
        cout << (X / Y) + (X % Y) << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        stairs();
    }
    
    return 0;
}