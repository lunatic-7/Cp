#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void weeks()
{
    int k, x;
    cin >> k >> x;

    cout << k * 7 - x << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        weeks();
    }
    
    return 0;
}