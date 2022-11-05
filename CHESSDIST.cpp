#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chs()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << max(abs(x1 - x2), abs(y1 - y2)) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chs();
    }
    
    return 0;
}