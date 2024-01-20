#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// LOGIC

// shots -> 1 2 3 4 5 6 7 8 9 10 11 12 13 14
// chnge -> 1 1 1 1 1 1 3 1 1 1  1  1  1  3

// So we can see there is a cycle of 7 and each 7 contains a
// total of 9

// We need to have a b c like 1 1 1 before enhanced shot and with
// enhanced shot make them 0 0 0 (This is the condition)

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll a, b, c;
        cin >> a >> b >> c;

        ll total = a + b + c;  // 18
        ll cycle = total / 9;  // 2

        if (total % 9 == 0 && a >= cycle && b >= cycle && c >= cycle) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}