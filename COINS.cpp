#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll notKnown(ll n)
{
    if (n < 12)
    {
        return n; 
    }
    else
    {
        return notKnown(n/2) + notKnown(n/3) + notKnown(n/4);
    }
}

int main()
{
    wasif();
    ll n;
    while (cin >> n)
    {
        cout << notKnown(n) << "\n";       
    }
    
    return 0;
}