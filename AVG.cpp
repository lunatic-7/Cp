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
    int T;
    cin >> T;

    while (T--)
    {
    	int n, k, v;
    	cin >> n >> k >> v;
    	int arr[n];

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	int x = (v * (n + k)) - accumulate(arr, arr + n, 0);

    	if (x > 0 && (x % k == 0)) cout << x / k << "\n";
    	else cout << -1 << "\n";
    }
    return 0;
}