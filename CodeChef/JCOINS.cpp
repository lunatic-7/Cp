#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void jan()
{
    int x, y;
    cin >> x >> y;

    cout << (x * 10) + (y * 5) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        jan();
    }
    
    return 0;
}