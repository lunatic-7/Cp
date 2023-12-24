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
    int n, k;
    cin >> n >> k;
    int arr[n];
    vector<int> ans;

    int mini = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    	if (mini > arr[i]) mini = arr[i];
    }

    int temp = 0;
    while (1)
    {
	    mini = INT_MAX;
	    for (int i = 0; i < n; ++i)
	    {
	    	if (mini >= arr[i])
	    	{
	    		mini = arr[i];
	    		temp = i + 1;
	    	}
	    }
	    
	    if (mini > k) break;
	    k -= arr[temp - 1];
	    ans.PB(temp);
	    arr[temp - 1] = INT_MAX;
    }

    cout << ans.size() << "\n";
    for (auto x : ans)
    {
    	cout << x << " ";
    }

    return 0;
}				