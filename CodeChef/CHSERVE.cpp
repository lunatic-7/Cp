#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void cock()
{
    ll p1, p2, k;
    cin >> p1 >> p2 >> k;

    if (((p1 + p2) / k) % 2 == 0)
    {
        cout << "CHEF" << "\n";
    }
    else
    {
        cout << "COOK" << "\n";
    }
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        cock();
    }
    
    return 0;
}