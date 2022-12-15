#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void khana()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if (min(a + c, b) >= n)
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
        khana();
    }
    
    return 0;
}