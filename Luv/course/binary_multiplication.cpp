#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define M 1e9+7
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const ll mod = 1e18+7;

ll binMultiply(ll a, ll b)
{
    ll ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % mod;
        }
        a = (a + a) % mod;  // if a = 10^18 so, a + a == 2 * 10^18 and % mod will convert it to 10^18 again
        b >>= 1;  // b right shift 1 
    }
    return ans;
}

int main()
{
    wasif();
    // If we have to multiply two big numbers like this (a * a) where a = 10^18 and value
    // of mod is 10^18. Then if we do something like this (a * a) % M  // It will overflow as we can
    // compute 10^18 * 10^18 in the first place, so to multiply these kind of numbers we use
    // binary multiplcation.
    ll a = 3, b = 13;
    cout << binMultiply(a, b) << "\n";
    return 0;
}