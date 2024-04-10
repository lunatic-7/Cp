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
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

        ll ct = 0;
    	for (int i = n - 1; i > 0; --i)
    	{
    		while ((arr[i] <= arr[i - 1]) && arr[i - 1] > 0)
    		{
    			arr[i - 1] /= 2;
    			ct++;
    		}
    	}

        bool chk = 1;
    	for (int i = 0; i < n - 1; ++i)
    	{
    		if (arr[i] >= arr[i + 1])
    		{
    			chk = 0;
    			break;
    		}
    	}
    	
    	cout << (chk ? ct : -1) << "\n";
    }
    return 0;
}