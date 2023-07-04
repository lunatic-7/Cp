#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void appp()
{
    int a, b, m;
    cin >> a >> b >> m;

    int k = abs(b - a);
    int l = abs(m - k);

    if (k <= l)
    {
        cout << k << "\n";
    }
    else
    {
        cout << l << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        appp();
    }
    
    return 0;
}