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
    int k, n, w;  // k = ek ka paisa, n = initial paisa, w = no. of bananas
    cin >> k >> n >> w;
    ll tot = 0, borrow = 0, i = 1;

    while(w--)
    {
    	tot += i * k;
    	i++;
    }

    borrow = tot - n;
    if (borrow <= 0) cout << 0 << "\n";
    else cout << borrow << "\n";

    return 0;
}