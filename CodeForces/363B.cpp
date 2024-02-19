#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const ll N = (1.5 * 1e5)+7;

vector<ll> hsh(N, 0);

int main()
{
    wasif();
    int n, k;
    cin >> n >> k;

    ll arr[n + 1];
    for (int i = 1; i <= n; ++i)
    {
    	cin >> arr[i];
    }

    for (int i = 1; i <= n; ++i)
    {
    	hsh[i] = hsh[i - 1] + arr[i];
    }


    ll ans = INT_MAX, ind = 0;
    for (int i = 0; i <= n - k; i++)
    {
    	ll sum = hsh[i + k] - hsh[i];
    	if (sum < ans)
    	{
    		ind = i + 1;
    	    ans = sum;
    	}
    }

    cout << ind << "\n";
    return 0;
}