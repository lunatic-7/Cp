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
    	int arr[n];

    	int odd = 0, even = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if (arr[i] % 2 != i % 2)
    		{
               if (arr[i] & 1) odd++;
               else even++;
    		}
    	}

    	if (even == odd) cout << even << "\n";
    	else cout << -1 << "\n";
    }
    return 0;
}