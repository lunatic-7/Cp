#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();

    int t;
    cin >> t;

    while (t--)
    {
	    int n, k;
	    cin >> n >> k;

	    int arr[n];
	    for (int i = 0; i < n; ++i)
	    {
	    	cin >> arr[i];
	    }

	    int ans = INT_MAX;
	    for (int i = 0; i < n; ++i)
	    {
	    	if (arr[i] >= k)
	    	{
	    		ans = min(ans, arr[i] % k);
	    	}
	    }

	    if (ans == INT_MAX) cout << -1 << "\n";
	    else cout << ans << "\n";    	
    }
    
    return 0;
}