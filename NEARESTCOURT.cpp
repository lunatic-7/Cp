#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void cort()
{
    double x, y;
    cin >> x >> y;
    double diff = abs(y - x);

    cout << ceil(diff / 2) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        cort();
    }
    
    return 0;
}