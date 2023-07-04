#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ambr()
{
    ll n, a;
    cin >> n >> a;
    ll t = sqrt(n);
    cout << t * a << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ambr();
    }
    
    return 0;
}