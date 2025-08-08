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

bool chk(ll l_stones, vector<ll> &h)
{
	vector<ll> arr = h;
	for (int i = h.size() - 1; i >= 0; --i)
	{
		if (arr[i] < l_stones) return false;
		else
		{
			ll d = (arr[i] - l_stones) / 3;
			d = min(d, (h[i] / 3));
			arr[i] -= 3 * d;
			if (i > 1)
			{
				arr[i - 1] += d;
				arr[i - 2] += 2 * d;				
			}
		}
	}

	return true;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	cin >> n;

    	vector<ll> h(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> h[i];
    	}

    	ll left = 0, right = 1e9, ans = 0;

    	while (left <= right)
    	{
    		ll mid = (left + right) / 2;
    		if (chk(mid, h))
    		{
    			ans = mid;
    			left = mid + 1;
    		}
    		else right = mid - 1;
    	}

    	cout << ans << "\n";
    }
    return 0;
}