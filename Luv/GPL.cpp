#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ggg()
{
    ll n;
    double temp, sum = 0;
    cin >> n;
    string s;
    cin >> s;

    for (ll i = 0; i < n; i++)
    {
        temp = s[i] - '0';
        sum += temp * pow(2, (n - 1) - i);
    }
    
    cout << fixed << setprecision(0) << sum << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ggg();
    }
    
    return 0;
}