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
    	int arr[3], n;
    	
    	for (int i = 0; i < 3; ++i)
    	{
    		cin >> arr[i];
    	}

    	cin >> n;

    	sort(arr, arr + 3);
    	int A = arr[2] - arr[0];
    	int B = arr[2] - arr[1];

    	int chk = 0;
    	if (A + B <= n)
    	{
    		n -= A + B;
    		if (n % 3 == 0)
    		{
    			chk = 1;
    		}
    	}

    	cout << (chk ? "YES" : "NO") << "\n";
    }
    return 0;
}