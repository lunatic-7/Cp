#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void football()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (C >= A && D >= B)
    {
        cout << "POSSIBLE" << "\n";
    }
    else
    {
        cout << "IMPOSSIBLE" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        football();
    }
    
    return 0;
}