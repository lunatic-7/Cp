#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mario()
{
    int x;
    cin >> x;

    if (x % 3 == 0)
    {
        cout << "NORMAL" << "\n";
    }
    else if (x % 3 == 1)
    {
        cout << "HUGE" << "\n";
    }
    else
    {
        cout << "SMALL" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mario();
    }
    
    return 0;
}