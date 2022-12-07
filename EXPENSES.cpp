#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int mir(int n, int inc)
{
    if (n == 0)
    {
        return inc;
    }
    
    return mir(n - 1, inc / 2);
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        int n, x;
        cin >> n >> x;
        int inc = pow(2, x);
        cout << mir(n, inc) << "\n";
    }
    
    return 0;
}