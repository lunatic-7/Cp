#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Wrong answer

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	int arr[n], maxi = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		maxi = max(maxi, arr[i]);
    	}

    	int pos = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (arr[i] == maxi)
    		{
    			pos = i + 1;
    			break;
    		}
    	}

    	if (pos == n - 1 && n < 4) cout << "NO" << "\n";
    	else cout << "YES" << "\n";
    }
    return 0;
}