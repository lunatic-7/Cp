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
    double h, l, d;
    cin >> h >> l;

    d = (l*l - h*h) / (2 * h);
    cout << setprecision(10) << fixed << d << "\n";
    return 0;
}