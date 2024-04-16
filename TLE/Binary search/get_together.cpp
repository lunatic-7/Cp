#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/A

bool chk(double time, vector<pair<double, double>>& people)
{
	pair<double, double> curr = {-1e18, 1e18};
	for (auto x : people)
	{
		pair<double, double> range = {x.F - (time * x.S), x.F + (time * x.S)};
		curr = {max(curr.F, range.F), min(curr.S, range.S)};
		if (curr.F > curr.S) return false;
	}
	return true;
}

int main()
{
    wasif();
    ll n;
    cin >> n;

    vector<pair<double,double>> dv(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> dv[i].F >> dv[i].S;
    }

    double left = 0, right = 1e9, precision = 1e7;
    double ans = right;
    // T.C = O(1e9 * 1e7) == O(1e16) ~ 60 iterations
    for (int i = 0; i < 60; ++i)
    {
    	double mid = (left + right) / 2;
    	if (chk(mid, dv))
    	{
    		ans = mid;
    		right = mid - precision;
    	}
    	else left = mid + precision;
    }

    cout << setprecision(7) << fixed << ans << "\n";
    
    return 0;
}