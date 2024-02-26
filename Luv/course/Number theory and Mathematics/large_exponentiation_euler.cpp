#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define M 1e9+7
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll binExp(ll a, ll b, ll m)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return ans;
}

int main()
{
    wasif();
    // Calculate 50^64^32 % M
    // M = 1e9+7 here, which is prime no.
    cout << binExp(50, binExp(64, 32, M - 1), M) << "\n";
    return 0;
}