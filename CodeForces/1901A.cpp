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

    	int oil = 0;
    	oil = max(oil, arr[0] - 0);
    	for (int i = 0; i < n - 1; ++i)
    	{
    		oil = max(oil, arr[i + 1] - arr[i]);
    	}
    	oil = max(oil, (k - arr[n - 1]) * 2);

    	cout << oil << "\n";
    }
    return 0;
}