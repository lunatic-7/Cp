#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void fruit()
{
    int n, m, k;
    cin >> n >> m >> k;

    int a = min(n, m);
    int b = max(n, m);

    while (a < b && k > 0)
    {
        a++;
        k--;
    }
    
    cout << b - a << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        fruit();
    }
    
    return 0;
}