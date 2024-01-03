#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// UNSOLVED

int findNumber(ll a, ll b) {
    // The number is the product of the two largest divisors
    return a * b / __gcd(a, b);
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        ll result = findNumber(a, b);
        cout << result << endl;
    }

    return 0;
}
