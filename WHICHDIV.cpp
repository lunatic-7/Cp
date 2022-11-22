#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void rate()
{
    int r;
    cin >> r;

    if (r >= 2000)
    {
        cout << 1 << "\n";
    }
    else if (r < 2000 && r >= 1600)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 3 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        rate();
    }
    
    return 0;
}