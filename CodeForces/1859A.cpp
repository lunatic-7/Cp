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
    	int n;
    	cin >> n;
    	int arr[n], mini = INT_MAX;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		mini = min(mini, arr[i]);
    	}

    	vector<int> b, c;
    	bool chk = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (arr[i] != mini) chk = 1;
    		
    		if (arr[i] == mini) b.PB(arr[i]);
    		else c.PB(arr[i]);
    	}

        if (chk)
        {
            cout << b.size() << " " << c.size() << "\n";
    	    for (auto x : b) cout << x << " ";
    	    cout << "\n";
    	    for (auto y : c) cout << y << " ";
    	    cout << "\n";
        }
        else cout << -1 << "\n";
    }
    return 0;
}