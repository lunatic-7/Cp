#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ckd()
{
    double x1, x2, x3, v1, v2;
    cin >> x1 >> x2 >> x3 >> v1 >> v2;
    double cd = abs(x3 - x1);
    double kd = abs(x3 - x2);

    if (cd/v1 < kd/v2)
    {
        cout << "Chef" << "\n";
    }
    else if (cd/v1 > kd/v2)
    {
        cout << "Kefa" << "\n";
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
        ckd();
    }
    
    return 0;
}