#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void fact()
{
    ll n;
    cin >> n;
    ll count = 0;
    
    while (n >= 5)
    {
        n = n / 5;
        count += n;
    }

    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        fact();
    }
    
    return 0;
}