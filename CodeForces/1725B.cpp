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
    ll n, d;
    cin >> n >> d;

    vector<ll> arr(n);

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll j = n - 1, i = 0, win = 0, temp = 0;

    while (i <= j)
    {
    	temp = arr[j];

	    if (temp <= d)
	    {
	    	ll needed = ((d - temp) / temp) + 1;
	    	i += needed;
	    	temp += (temp * needed);
	    }

	    if (temp > d && i <= j)
	    {
	    	win++;
	    	temp = 0;
	    	j--;
	    }    	
    }

    cout << win << "\n";
    return 0;
}