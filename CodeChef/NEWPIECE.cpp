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
    	int a, b, p, q;
    	cin >> a >> b >> p >> q;

    	if (a == p && b == q) cout << 0 << "\n";
    	else if (((a + b) & 1) && ((p + q) & 1)) cout << 2 << "\n";
    	else if (!((a + b) & 1) && !((p + q) & 1)) cout << 2 << "\n";
    	else if (((a + b) & 1) && !((p + q) & 1)) cout << 1 << "\n";
    	else if (!((a + b) & 1) && ((p + q) & 1)) cout << 1 << "\n";
    }
    return 0;
}