#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void discount()
{
    double q, p;
    cin >> q >> p;

    if (q > 1000)
    {
        double discount = 0.1 * q * p;
        cout << fixed << setprecision(6) << (q * p) - discount << "\n";
    }
    else
    {
        cout << fixed << setprecision(6) << q * p << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        discount();
    }
    
    return 0;
}