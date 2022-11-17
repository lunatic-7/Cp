#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void rankl()
{
    double x;
    cin >> x;

    cout << ceil(x / 25) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        rankl();
    }
    
    return 0;
}