#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void abc()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "ALICE" << "\n";
        }
        else
        {
            cout << "CHARLIE" << "\n";
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            cout << "BOB" << "\n";
        }
        else
        {
            cout << "CHARLIE" << "\n";
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
        abc();
    }
    
    return 0;
}