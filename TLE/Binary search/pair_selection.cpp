#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// https://codeforces.com/edu/course/2/lesson/6/4/practice/contest/285069/problem/C

bool chk(vector<double>& c, ll k, ll n)
{
	sort(c.begin(), c.end());
	double sum = 0;
	for (int i = 0; i < k; ++i)
	{
		sum += c[n - i - 1];
	}

	return sum >= 0;
}

int main()
{
    wasif();
    ll n, k;
    cin >> n >> k;

    vector<pair<double, double>> pairs(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> pairs[i].F >> pairs[i].S;
    }

    double left = 0, right = 1e6, precision = 1e-7;
    double ans;
    for (int i = 0; i < 60; ++i)
    {
    	double mid = (left + right) / 2;

    	vector<double> c(n);
    	for (int i = 0; i < n; ++i)
    	{
    		c[i] = (pairs[i].F - (mid * pairs[i].S));
    	}

    	if (chk(c, k, n))
    	{
    		ans = mid;
    		left = mid + precision;
    	}
    	else right = mid - precision;
    }

    cout << setprecision(7) << fixed << ans << "\n";
    return 0;
}