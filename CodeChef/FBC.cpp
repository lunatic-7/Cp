#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void bkt()
{
    int x, k;
    cin >> x >> k;

    cout << x - k << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        bkt();
    }
    
    return 0;
}