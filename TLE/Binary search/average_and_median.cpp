#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// https://atcoder.jp/contests/abc236/tasks/abc236_e

double chk(vector<double>& b, ll n)
{
    vector<double> c(n);
    c[0] = b[0];
    c[1] = b[1] + max(c[0], 0.0);
    for (int i = 2; i < n; ++i)
    {
    	c[i] = b[i] + max(c[i - 1], c[i - 2]);
    }

    return max(c[n - 1], c[n - 2]);
}

double bestAvg(ll n, vector<ll> arr)
{
	double left = 0, right = 1e12, precision = 1e-5;
	double avg;
	for (int i = 0; i < 60; ++i)
	{
		double mid = (left + right) / 2;
		vector<double> b(n);
		for (int i = 0; i < n; ++i)
		{
			b[i] = arr[i] - mid;
		}

		if (chk(b, n) >= 0)
		{
			avg = mid;
			left = mid + precision;
		}
		else right = mid - precision;
	}

	return avg;
}

ll bestMedium(ll n, vector<ll>& arr)
{
	ll left = 0, right = 1e12;
	ll med;
	while (left <= right)
	{
		ll mid = (left + right) / 2;
		vector<double> b(n);
		for (int i = 0; i < n; ++i)
		{
			(arr[i] >= mid ? b[i] = 1 : b[i] = -1);
		}
		
		if (chk(b, n) > 0)
		{
			med = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}

	return med;
}

int main()
{
    wasif();
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    cout << setprecision(5) << fixed << bestAvg(n, arr) << "\n";
    cout << bestMedium(n, arr) << "\n";
    return 0;
}