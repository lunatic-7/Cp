#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
ll a, b;

auto possMov(ll x, ll y)
{
	vector<pair<ll, ll>> k;
	k.PB({x + a, y + b});
	k.PB({x + b, y + a});
	k.PB({x - a, y - b});
	k.PB({x - b, y - a});

	k.PB({x - a, y + b});
	k.PB({x - b, y + a});
	k.PB({x + a, y - b});
	k.PB({x + b, y - a});

    return k;
}

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	cin >> a >> b;
    	ll xk, yk;
    	cin >> xk >> yk;
    	ll xq, yq;
    	cin >> xq >> yq;

    	vector<pair<ll, ll>> ppq, ppk;
    	ppk = possMov(xk, yk);
		ppq = possMov(xq, yq);

		set<pair<int,int>> st;
		for (int i = 0; i < 8; ++i)
		{
			for (int j = 0; j < 8; ++j)
			{
				if (ppk[i].F == ppq[j].F && ppk[i].S == ppq[j].S)
				{
					st.insert({ppk[i].F, ppk[i].S});
					break;
				}
			}
		}

		cout << st.size() << "\n";
    }
    return 0;
}