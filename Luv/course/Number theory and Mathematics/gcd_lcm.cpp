#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Recursive function for GCD.   TC O(log(n))
int gcd(int a, int b)
{
    if (b == 0) return a;

    return gcd(b, a % b);
}

int main()
{
    wasif();
    cout << gcd(12, 4) << "\n";
    cout << gcd(18, 12) << "\n";
    cout << gcd(18, 12) << "\n";
    // Finding LCM using GCD
    cout << 12 * 18 / gcd(12, 18) << "\n";
    // Inbuit function to find GCD.   TC: O(log(n))
    cout << __gcd(12, 18) << "\n";

    // Trick to find minimum fraction of two numbers:
    // eg: a = 12, b = 18
    // so, 12/18 ---> 6/9 ---> 2/3
    // We can find this using (12 / gcd(12,18)) / (18 / gcd(12, 18))
    return 0;
}