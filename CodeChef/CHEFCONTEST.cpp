#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void contest()
{
    int x, y, p, q;
    cin >> x >> y >> p >> q;

    if (x + p * 10 < y + q * 10)
    {
        cout << "Chef" << "\n";
    }
    else if (x + p * 10 > y + q * 10)
    {
        cout << "Chefina" << "\n";
    }
    else
    {
        cout << "Draw" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        contest();
    }
    
    return 0;
}