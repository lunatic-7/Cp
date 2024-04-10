#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Wrong

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

        sort(arr, arr + n);

        int chk = 0, num = arr[1] % arr[0];
        for (int i = 2; i < n; ++i)
        {
        	if (arr[i] % arr[0] != num)
        	{
        		chk = 1;
        		break;
        	}
        }

        if (!chk) cout << arr[n - 1] / arr[0] << "\n";
        else cout << arr[n - 1] << "\n";
    }
    return 0;
}