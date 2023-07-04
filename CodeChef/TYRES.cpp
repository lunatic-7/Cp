#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void cbd()
{
    int n;
    cin >> n;
    int bike = 0;

    if (n % 4 != 0)
    {
        bike++;
    }

    if (bike)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        cbd();
    }
    
    return 0;
}