#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// https://cses.fi/problemset/task/1085

bool possible(ll value, vector<ll>& arr, ll k)
{
	ll move = 0;
	ll currentTaskSum = 0;
	ll n = arr.size();

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > value) return false;
		if (arr[i] + currentTaskSum <= value)
		{
			currentTaskSum += arr[i];
		}
		else
		{
			move++;
			if (move >= k) return false;
			currentTaskSum = arr[i];
		}
	}

	return true;
}

int main()
{
    wasif();
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    ll left = 0, right = 1e15;
    ll ans = right;
    while (left <= right)
    {
    	ll mid = (left + right) / 2;
    	if (possible(mid, arr, k))
    	{
    		ans = mid;
    		right = mid - 1;
    	}
    	else 
    	{
    		left = mid + 1;
    	}
    }

    cout << ans << "\n";
    return 0;
}