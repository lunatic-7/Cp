#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dp2()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << "\n";
    }
    else
    {
        cout << n - 1 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        dp2();
    }
    
    return 0;
}