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
    	ll n, k;
    	cin >> n >> k;

    	vector<ll> arr(n*k);
    	for (int i = 0; i < n*k; ++i)
    	{
    		cin >> arr[i];
    	}

    	ll i = 0, j = n*k - 1, mid = 0;
    	if (n & 1) mid = n / 2;  // 0 indexed
    	else mid = (n / 2) - 1;

    	ll ans = 0;
    	ll elem = n - (mid + 1);

    	while (i <= j)
    	{
    		if (!elem)
    		{
    			ans += arr[j];
    			elem = n - (mid + 1);
    			i+=mid;
    		}
    		else elem--;

    		j--;
    	}

    	cout << ans << "\n";
    }
    return 0;
}