// UNSOLVED

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
    	int n;
    	cin >> n;
    	int arr[n];

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	int maxi = 1;
    	int mini = 1;
    	int cnt = 1;

    	for (int i = 0; i < n - 1; ++i)
    	{
    		if (arr[i + 1] - arr[i] <= 2)
    		{
    			cnt++;
    			maxi = max(maxi, cnt);
                mini = maxi;
    		}
    		else
    		{
     		    cnt = 1;
    		}	
    	}
    	
    	int cnt2 = 1;
    	for (int i = 0; i < n - 1; ++i)
    	{
    		if (arr[i + 1] - arr[i] > 2)
    		{
                mini = min(cnt2, mini);
                cnt2 = 1;   
    		}
    		else
    		{
    			cnt2++;
    		}
    	}

    	cout << mini << " " << maxi << "\n";


    }
    return 0;
}