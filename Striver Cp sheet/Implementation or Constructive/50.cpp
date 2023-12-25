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
    int r, c;
    cin >> r >> c;

    // Try to use normal arrays wherever possible :)
    int arr[r][c];
    int ans[r][c];


    // Setting values of ans
    for (int i = 0; i < r; ++i)
    {
    	for (int j = 0; j < c; ++j)
    	{
    		ans[i][j] = 1;
    	}
    }

    // Logic: See 0's in B
    // If any Bij is 0 then all it's corresponding rows and columns will be 0s
    for (int i = 0; i < r; ++i)
    {
    	for (int j = 0; j < c; ++j)
    	{
    		cin >> arr[i][j];
    		if (arr[i][j] == 0)
    		{

    			for (int k = 0; k < r; ++k)
    			{
    				ans[k][j] = 0;
    			}

    			for (int k = 0; k < c; ++k)
    			{
    				ans[i][k] = 0;
    			}
    		}
    	}
    }

    // Cheking for 1's
    for (int i = 0; i < r; ++i)
    {
    	for (int j = 0; j < c; ++j)
    	{
    		if (arr[i][j] == 1)
    		{
    			int sum = 0;
    			for (int k = 0; k < r; ++k)
    			{
    				sum += ans[k][j];
    			}

    			for (int k = 0; k < c; ++k)
    			{
    				sum += ans[i][k];
    			}

    			if (sum == 0)
    			{
    				cout << "NO" << "\n";
    				return 0;
    			}
    		}
    	}
    }

    cout << "YES" << "\n";
    for (int i = 0; i < r; ++i)
    {
    	for (int j = 0; j < c; ++j)
    	{
    		cout << ans[i][j] << " ";
    	}
    	cout << "\n";
    }

    return 0;
}