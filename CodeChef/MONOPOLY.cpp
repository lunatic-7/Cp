#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mono()
{
    int r1, r2, r3;
    cin >> r1 >> r2 >> r3;

    if (r1 > r2 + r3 || r2 > r1 + r3 || r3 > r1 + r2)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mono();
    }
    
    return 0;
}