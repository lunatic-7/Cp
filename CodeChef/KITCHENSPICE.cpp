#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void spice()
{
    int x;
    cin >> x;
    if (x < 4)
    {
        cout << "MILD" << "\n";
    }
    else if (x >= 4 && x < 7)
    {
        cout << "MEDIUM" << "\n";
    }
    else
    {
        cout << "HOT" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        spice();
    }
    
    return 0;
}