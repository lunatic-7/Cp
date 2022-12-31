#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    ll n;
    cin >> n;
    ll sum1 = 0, sum2 = 0;

    for (int i = n; i >= 1; i--)
    {
        if (sum1 < sum2)
        {
            sum1 += i;
        }
        else
        {
            sum2 += i;
        }
    }
    
    cout << abs(sum2 - sum1) << "\n";

    return 0;
}