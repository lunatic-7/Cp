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
    	ll n;
    	cin >> n;

    	vector<ll> arr(n);
    	ll twoCT = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if (arr[i] == 2) twoCT++;
    	}

    	bool chk = !(twoCT & 1);  // agar even
    	ll k = 0, ind = 0;
    	if (chk)
    	{
    		for (int i = 0; i < n; ++i)
    		{
    			if (arr[i] == 2)
    			{
    				k++;
    				ind = i;
    			}
    			if (twoCT / 2 == k) break;
    		}
    	}

    	cout << (chk ? ind + 1 : -1) << "\n";
    }
    return 0;
}