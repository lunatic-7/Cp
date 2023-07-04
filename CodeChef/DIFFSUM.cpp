#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n, m;
    cin >> n >> m;

    if (n > m)
    {
        cout << n - m << "\n";
    }
    else
    {
        cout << n + m << "\n";
    }
    
    
    return 0;
}