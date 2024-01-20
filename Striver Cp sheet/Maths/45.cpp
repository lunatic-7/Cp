#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Approach 
// Fix gcd of length c initially. 
// if c = 6
// eg: gcd(x, y) = 100000
// And we know length of x and y will always be greater than length of gcd(x, y)
// So, now set x = y = gcd(x, y)
// And now keep multiplying x with 2, x * 2 * 2 ...
// And now keep multiplying y with 3, y * 3 * 3 ...
// Until we get our desired length of x and y, and they will have
// only one factor in common which is gcd(x, y) 

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll a, b, c, x, y, z;
    	cin >> a >> b >> c;

    	z = pow(10,c-1);  // this will set the length and value of gcd
    	x = z;
    	y = z;

    	while(to_string(x).size() < a) x *= 2;
    	while(to_string(y).size() < b) y *= 3;

    	cout << x << " " << y << "\n";
    }
    return 0;
}