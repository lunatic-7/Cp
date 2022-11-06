#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void game()
{
    int X, Y;
    cin >> X >> Y;

    if ((X % 2 == 0 && Y % 2 != 0) || (X % 2 != 0 && Y % 2 == 0))
    {
        cout << "Jay" << "\n";
    }
    else
    {
        cout << "Janmansh" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        game();
    }
    
    return 0;
}