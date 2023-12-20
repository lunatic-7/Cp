#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// TLE

int chkMax(int arr[], int maxi, int n)
{
	int max_count = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == maxi) max_count++;
    }

    return max_count;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, m;
    	cin >> n >> m;
        int arr[n];

    	int maxi = 0;
        for (int i = 0; i < n; ++i)
        {
        	cin >> arr[i];
        	maxi = max(maxi, arr[i]);
        }

        int op = 0;
       	int not_max = n - chkMax(arr, maxi, n);
       	while (not_max >= m)
       	{
       		for (int i = 0; i < m; ++i)
       		{
       			arr[i]++;
       		}
       		op++;
       	    not_max = n - chkMax(arr, maxi, n);
       	}

       	while (not_max > 0 && not_max < m)
       	{
	       	for (int i = 0; i < not_max; ++i)
	       	{
	       		arr[i]++;
	       	}       		
	       	op++;
       	    not_max = n - chkMax(arr, maxi, n);
       	}

       	cout << op << "\n";

    }
    return 0;
}