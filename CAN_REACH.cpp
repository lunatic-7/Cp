#include <bits/stdc++.h>

using namespace std;
#define ll long long

void hostel()
{
    int x, y, k;
    cin >> x >> y >> k;

    if (x % k == 0 and y % k == 0)
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >>  T;

    while (T--)
    {
        hostel();
    }
    
    return 0;
}