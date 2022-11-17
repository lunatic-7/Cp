#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chor()
{
    int x, y;
    cin >> x >> y;

    cout << max(x, y) - min(x, y) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chor();
    }
    
    return 0;
}