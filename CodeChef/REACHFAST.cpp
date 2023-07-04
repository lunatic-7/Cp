#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chefina()
{
    int x, y, k;
    cin >> x >> y >> k;
    int step = 0;
    int mini = min(x, y);
    int maxi = max(x, y);

    while (mini < maxi)
    {
        mini += k;
        step++;
    }

    cout << step << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chefina();
    }
    
    return 0;
}