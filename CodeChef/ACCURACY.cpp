#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void neg()
{
    int x;
    cin >> x;

    if (x % 3 == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << 3 - (x % 3) << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        neg();
    }
    
    return 0;
}