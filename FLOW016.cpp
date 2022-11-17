#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// GCD and called HCF Recursive approach (Long division method)
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {        
        ll a, b;
        cin >> a >> b;

        ll hcf = gcd(a, b);

        // Formula for GCD to LCM
        ll lcm = (a * b)/hcf;

        cout << hcf << " " << lcm << "\n";
    }
    
    return 0;
}