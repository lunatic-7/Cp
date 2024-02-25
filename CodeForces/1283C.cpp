#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define PF push_front
#define POF pop_front
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Upsolved
const int N = 2e5+7;

ll f[N], used[N];
vector<ll> give, receive;

int main()
{
    wasif();
  	ll n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> f[i];
		used[f[i]] = 1;  // jisko mil gya
		if (f[i] == 0) give.PB(i);  // jisko dena hai
	}

	for (int i = 1; i <= n; ++i)
	{
		if (!used[i]) receive.PB(i);  // jisko nhi mila
	}

	for (int i = 0; i < give.size(); ++i)
	{
		if (give[i] == receive[i])
		{
			if (i == 0) swap(give[i], give[i + 1]);
			else swap(give[i], give[i - 1]);
		}
	}

	for (int i = 0; i < give.size(); ++i)
	{
		f[give[i]] = receive[i];
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << f[i] << " ";
	}
	
    return 0;
}