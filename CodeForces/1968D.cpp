#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n, k, pb, ps;
    	cin >> n >> k >> pb >> ps;

    	vector<ll> p(n), a(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> p[i];
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    	}

    	map<int, int> mp;
    	for (int i = 0; i < n; ++i)
    	{
    		mp[p[i]] = a[i];
    	}

    	ll bodya = 0, sasha = 0;
    	ll bodyaPos = p[pb - 1];
    	ll sashaPos = p[ps - 1];
    	while (k--)
    	{
    		int chk = 0;
    		bodya += mp[bodyaPos];
    		sasha += mp[sashaPos];
    		// cout << "s: " << mp[sashaPos] << "\n";

    		if (mp[p[bodyaPos - 1]] > mp[bodyaPos]) bodyaPos = p[bodyaPos - 1];
    		else chk++;
    		if (mp[p[sashaPos - 1]] > mp[sashaPos]) sashaPos = p[sashaPos - 1];
    		else chk++;

    		if (chk == 2)
    		{
    			bodya += mp[bodyaPos] * k;
    			sasha += mp[sashaPos] * k;
    			k = 0;
    		}
    	}

    	if (bodya > sasha) cout << "Bodya" << "\n";
    	else if (sasha > bodya) cout << "Sasha" << "\n";
    	else cout << "Draw" << "\n";
    }
    return 0;
}