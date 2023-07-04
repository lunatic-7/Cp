#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void kaat()
{
    ll n;
    cin >> n;
    ll temp;
    map<ll, ll> s;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > 0)
        {
            s[temp]++;
        }
    }
    
    cout << s.size() << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        kaat();
    }
    
    return 0;
}