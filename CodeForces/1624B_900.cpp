// WRONG
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
    int T;
    cin >> T;

    while (T--)
    {
    	ll a, b, c;
    	cin >> a >> b >> c;

        if ((b - a) == (c - b)) cout << "YES" << "\n";
        else if ((a + c) % (2 * b) == 0) cout << "YES" << "\n";
        else if ((2 * b - a) > 0 && (2 * b - a) % c == 0) cout << "YES" << "\n";
        else if ((2 * b - c) > 0 && (2 * b - c) % a == 0) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }

    return 0;
}