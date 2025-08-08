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

// SEEN
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

    	ll num = 2;
    	while (1)
    	{
    	    set<ll> count;
	    	for (int i = 0; i < n; ++i)
	    	{
	    		count.insert(arr[i] % num);
	    	}

	    	if (count.size() == 2) break;
	    	num *= 2;
    	}

    	cout << num << "\n";
    }
    return 0;
}