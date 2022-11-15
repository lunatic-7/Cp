#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void uttu()
{
    int x, y;
    cin >> x >> y;

    if (x < y)
    {
        cout << "REPAIR" << "\n";
    }
    else if (y < x)
    {
        cout << "NEW PHONE" << "\n";
    }
    else
    {
        cout << "ANY" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        uttu();
    }
    
    return 0;
}