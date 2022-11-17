#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void rate()
{
    double x, y;
    cin >> x >> y;

    cout << ceil((y - x) / 8) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        rate();
    }
    
    return 0;
}