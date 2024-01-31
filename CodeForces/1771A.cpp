#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// WRONG

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	int arr[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	int mini = arr[0], maxi = arr[0];
    	for (int i = 0; i < n; ++i)
    	{
    		mini = min(mini, arr[i]);
    		maxi = max(maxi, arr[i]);
    	}

    	ll miniCt = 0, maxiCt = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (arr[i] == mini) miniCt++;
    		if (arr[i] == maxi) maxiCt++;
    	}

        if (mini == maxi) cout << miniCt * 2 << "\n";
    	else cout << (miniCt * maxiCt) * 2 << "\n";

    }
    return 0;
}