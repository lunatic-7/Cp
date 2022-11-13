#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void rent()
{
    int x;
    cin >> x;

    if (x <= 300)
    {
        cout << 3000 << "\n";
    }
    else
    {
        cout << x * 10 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        rent();
    }
    
    return 0;
}