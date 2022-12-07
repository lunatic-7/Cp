#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ap()
{
    double a, c;
    cin >> a >> c;
    double b = (a + c) / 2;

    if (floor(b) == b)
    {
        cout << floor(b) << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ap();
    }
    
    return 0;
}