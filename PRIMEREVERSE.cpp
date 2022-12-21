#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dekhte()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll c1 = 0, c2 = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            c1++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (b[i] == '1')
        {
            c2++;
        }
    }
    
    if (c1 == c2)
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
        dekhte();
    }
    
    return 0;
}