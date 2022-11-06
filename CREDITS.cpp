#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sem()
{
    int X;
    cin >> X;

    if (X > 65)
    {
        cout << "OVERLOAD" << "\n";
    }
    else if (X < 35)
    {
        cout << "UNDERLOAD" << "\n";
    }
    else
    {
        cout << "NORMAL" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        sem();
    }
    
    return 0;
}