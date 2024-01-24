#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    int x, y, z;
    cin >> x >> y >> z;

    // Given areas of sides of ||piped
    // x = l * b
    // y = b * h
    // z = l * h

    // From above eqns we can get:
    // l^2 = (x * z) / y
    // b^2 = (x * y) / z
    // h^2 = (z * y) / x


    // And sum of all egdes of ||piped is:
    // 4 * (l + b + h)

    int l = sqrt((x * z) / y);
    int b = sqrt((x * y) / z);
    int h = sqrt((y * z) / x);

    cout << 4 * (l + b + h) << "\n";
    return 0;
}