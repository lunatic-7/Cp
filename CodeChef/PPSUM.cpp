#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        int d, n;
        cin >> d >> n;
        while (d > 0)
        {
            n = sum(n);
            d--;
        }
        
        cout << n << "\n";
    }
    
    return 0;
}