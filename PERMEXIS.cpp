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

    while(T--)
    {
    	int n;
    	cin >> n;
    	int arr[n];

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	sort(arr, arr + n);

        int chk = 1;
    	for (int i = 0; i < n - 1; ++i)
    	{
    		if (abs(arr[i] - arr[i + 1]) > 1)
    		{
    			chk = 0;
    			break;
    		}
    	}

    	if (chk) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }
    return 0;
}