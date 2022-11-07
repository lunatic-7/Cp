#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void direction()
{
    int x;
    cin >> x;

    if (x % 4 == 0)
    {
        cout << "North" << "\n";
    }
    else if (x % 4 == 1)
    {
        cout << "East" << "\n";
    }
    else if (x % 4 == 2)
    {
        cout << "South" << "\n";
    }
    else if (x % 4 == 3)
    {
        cout << "West" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        direction();
    }
    
    return 0;
}