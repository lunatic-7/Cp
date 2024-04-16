#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B

bool chk(double mid, vector<ll>& rope, ll pieces)
{
	ll sz = rope.size();
	ll piece = 0;
	for (int i = 0; i < sz; ++i)
	{
		piece += rope[i] / mid;
		if (piece >= pieces) return true;
	}
	return false;
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

    double left = 1e-7, right = 1e7, precision = 1e-7;
    double ans = left;
    while (right - left > precision)
    {
    	double mid = (left + right) / 2;
    	if (chk(mid, arr, k))
    	{
    		ans = mid;
    		left = mid + precision;
    	}
    	else right = mid - precision;
    }

    cout << setprecision(7) << fixed << ans << "\n";
    return 0;
}