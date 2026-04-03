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
 

// SEEN (Question sahi se nhi likha tha)
// This question meant: koi bhi a[i] (i = 0 ... n), x se GCD == 1 dede,
// means any a[i] % x != 0

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	cin >> n;

    	vector<ll> arr(n);
    	
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	int ans = -1;
    	// Till 59 only because 2 * 3 * 5 ... 59 > 1e18, so enough
    	for (auto &x : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59})
    	{
    		for (int i = 0; i < n; ++i)
    		{
    			if (arr[i] % x != 0)
    			{
    				ans = x;
    				break;
    			}
    		}
    		if (ans != -1) break;
    	}

    	cout << ans << "\n";
    }

    return 0;
}