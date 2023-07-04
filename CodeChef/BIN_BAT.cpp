#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void rou()
{
    ll n;
    int a, b;
    cin >> n >> a >> b;
    int count = 0;

    while (n >= 2)
    {
        n /= 2;
        count++;
    }

    cout << (count * a) + ((count - 1) * b) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        rou();
    }
    
    return 0;
}