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

    	int arr[n][n - 1];

    	map<int, int> col1;
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < n - 1; ++j)
    		{
    			cin >> arr[i][j];
    			if (j == 0)
    			{
                    col1[arr[i][j]]++;
    			}
    		}
    	}

        int first_elm = -1, chk = 0;
    	for (auto x : col1)
    	{
    		if (x.S > chk)
    		{
    			first_elm = x.F;
    			chk = x.S;
    		}
    	}

    	cout << first_elm << " ";

        int pt = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		int j = 0;
            if (arr[i][j] != first_elm)
            {
                pt = i;
                break;
            }
    	}

        for (int j = 0; j < n - 1; ++j)
        {
        	cout << arr[pt][j] << " ";
        }
        cout << "\n";

    }
    return 0;
}