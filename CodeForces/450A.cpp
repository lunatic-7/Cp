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
    int n, m;
    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
    	if (arr[i] <= m) arr[i] = 0;
    	else if (arr[i] % m == 0) arr[i] = arr[i] / m;
    	else arr[i] = (arr[i] / m) + 1;
    }

    int ans = 0, maxi = -1;

    for (int i = 0; i < n; ++i)
    {
    	if (arr[i] >= maxi)
    	{
    		maxi = arr[i];
    		ans = i;
    	}
    }

    cout << ans + 1 << "\n";
    return 0;
}