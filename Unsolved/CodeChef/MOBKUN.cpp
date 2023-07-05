// UNSOLVED

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mob()
{
    int n, m, k; 
    ll x;
    cin >> n >> m >> k >> x;

    int i = (n * (k - 1)) + n + m;

    x = x % i;

    if ((x >= (i - (n + m - 1))) && (x <= i))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";    
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mob();
    }
    
    return 0;
}