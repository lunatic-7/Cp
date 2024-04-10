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

    	int arr[n], mingap = INT_MAX;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	for (int i = 0; i < n - 1; ++i)
    	{
    		mingap= min(mingap, arr[i + 1] - arr[i]);
    	}

    	if (mingap < 0) cout << 0 << "\n";
    	else cout << mingap / 2 + 1 << "\n";
    }
    return 0;
}