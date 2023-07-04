#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n;
    cin >> n;
    ll c[n];
    int isum = 0, asum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        isum += i + 1;
        asum += c[i];
    }
    
    if (isum == asum)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    
    return 0;
}