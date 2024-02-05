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
    int t;
    cin >> t;

    while (t--) 
    {
    	ll a, b, c, d;
    	cin >> a >> b >> c >> d;
        
        int ans = 0;
        ll num1 = a * d;
        ll num2 = c * b;

        if (num1 == num2) ans = 0;
        else if (min(num1, num2) == 0) ans = 1;
        else if (max(num1, num2) % min(num1, num2) == 0) ans = 1;
        else ans = 2;

        cout << ans << '\n';
    }
    return 0;
}