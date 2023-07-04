#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void kepler()
{
    double t1, t2, r1, r2;
    cin >> t1 >> t2 >> r1 >> r2;

    if ((pow(t1, 2) / pow(r1, 3)) == (pow(t2, 2) / pow(r2, 3)))
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
        kepler();
    }
    
    return 0;
}