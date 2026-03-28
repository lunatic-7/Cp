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
 
int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
	    int n, m, h;
	    cin >> n >> m >> h;

	    vector<int> arr(n), cp_arr(n);
	    for (int i = 0; i < n; ++i)
	    {
	    	cin >> arr[i];
	    }

	    cp_arr = arr;

	    vector<pair<int, int>> bc;
	    for (int i = 0; i < m; ++i)
	    {
	    	int b, c;
	    	cin >> b >> c;
	    	bc.PB({b, c});
	    }

	    unordered_set<int> st;
	    for (int i = 0; i < m; ++i)
	    {
	    	if (arr[bc[i].F - 1] + bc[i].S <= h) 
	    	{
	    		arr[bc[i].F - 1] += bc[i].S;
	    		st.insert(bc[i].F - 1);  // jo index humne arr mai change kiya hai
	    	}
	    	// else arr = cp_arr;  // O(n)  that's why TLE
	    	else  // replace only those element which were changed in previous operations
	    	{
	    		for (auto &x : st)
	    		{
	    			arr[x] = cp_arr[x];
	    		}
	    		st.clear();
	    	}
	    }
	    
	    showVect(arr);
    }

    return 0;
}