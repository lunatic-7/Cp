#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ab()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "YES" << "\n";
    }
    else
    {
        int mini = min(a, b);
        int maxi = max(a, b);
        while (mini < maxi)
        {
            mini *= 2;
        }
        if (mini == maxi)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ab();
    }
    
    return 0;
}