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
    int a, b;
    cin >> a >> b;

    int one = min(a, b), two = 0;
    a -= one, b -= one;
    two = max(a, b);

    cout << one << " " << two / 2 << "\n";

    return 0;
}