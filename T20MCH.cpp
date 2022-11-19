#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    wasif();
    int r, o, c;
    cin >> r >> o >> c;
    int cruns = (20 - o) * 6 * 6;

    if (c + cruns > r)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
 
    return 0;
}