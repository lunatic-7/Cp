#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 2*1e5+7;

ll dp[N] = {0};

ll solve(ll num)
{
	ll tot = 0;

	while(num > 0)
	{
        tot += num % 10;
        num /= 10;
	}

	return tot;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    for (int i = 1; i <= N; ++i)
    {
    	dp[i] = dp[i - 1] + solve(i);
    }

    while (t--)
    {
    	ll n;
    	cin >> n;

        cout << dp[n] << "\n";
    }
    return 0;
}