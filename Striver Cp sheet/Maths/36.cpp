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
    ll a, b, s;
    cin >> a >> b >> s;

    ll minStp = abs(a) + abs(b);
    if (s >= minStp)
    {
    	if ((s & 1) == (minStp & 1)) cout << "Yes" << "\n";
    	else cout << "No" << "\n";
    }
    else cout << "No" << "\n";
    return 0;
}