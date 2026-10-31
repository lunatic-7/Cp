#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
 

bool chk(vector<vector<ll>>& lab, ll k, ll ans)
{
	for (int i = 0; i < lab.size(); ++i)
	{
		ll a = lab[i][0];
		ll b = lab[i][1];
		ll c = lab[i][2];

		ll s = a + b + c;
		// ye sahi hai
		if (s >= ans) continue;
		else
		{
			if (a == b && b == c) k = -1;
			else if ((a <= b) && (b <= c))
			{
				ll d = min(b - a, c - b) + 1;
				s -= d;
				k -= (ans - s) + d; 
			}
			else
			{
				k -= ans - s;
			}
		}

		if (k < 0) return 0;
	}

	return 1;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	ll k;
    	cin >> n >> k;

    	vector<vector<ll>> lab(n, vector<ll>(3));
    	ll mini = LLONG_MAX;
    	for (int i = 0; i < n; ++i)
    	{
    		ll sum = 0;
    		for (int j = 0; j < 3; ++j)
    		{
    			cin >> lab[i][j];
    			sum += lab[i][j];
    		}
    		mini = min(mini, sum);
    	}

    	ll low = -3*1e9;
    	ll high = mini + k; // as our ans can never be greater than this

    	// Binary searcing on ans
    	ll ans = low;
    	while (low <= high)
    	{
    		ll mid = low + (high - low) / 2;
    		if (chk(lab, k, mid))
    		{
    			ans = mid;
    			low = mid + 1;
    		}
    		else high = mid - 1;
    	}

    	cout << ans << "\n";
    }

    return 0;
}