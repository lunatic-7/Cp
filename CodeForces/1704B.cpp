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
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n, x;
    	cin >> n >> x;

    	vector<ll> a(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    	}

    	ll p_min = a[0] - x, p_max = x + a[0];
    	ll chng = 0;

    	for (int i = 1; i < n; ++i)
    	{
    		ll n_min = a[i] - x;
    		ll n_max = x + a[i];

    		if (n_min >= p_min && n_min <= p_max) continue;
    		else if (n_max >= p_min && n_max <= p_max) continue;
    		else
    		{
    			p_min = n_min;
    			p_max = n_max;
    			chng++;    			
    		}             
    	}

    	cout << chng << "\n";
    }
    return 0;
}