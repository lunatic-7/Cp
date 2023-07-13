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
    int k, l, m, n, d, cnt = 0;
    cin >> k >> l >> m >> n >> d;

    for (int i = 1; i <= d; ++i)
    {
    	if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) cnt++;
    }

    cout << cnt << "\n";
    return 0;
}