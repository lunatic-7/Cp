#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void move()
{
    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;

    if (sx == ex || sy == ey)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 1 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        move();
    }
    
    return 0;
}