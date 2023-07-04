#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void luc()
{
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    int min1 = min(min(x1, (n + 1) - x1), min(y1, (n + 1) - y1));
    int min2 = min(min(x2, (n + 1) - x2), min(y2, (n + 1) - y2));

    int bhar = min1 + min2;
    int andr = abs(x2 - x1) + abs(y2 - y1);
    
    cout << min(andr, bhar) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        luc();
    }
    
    return 0;
}