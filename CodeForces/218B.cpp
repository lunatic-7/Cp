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
    int n, m;
    cin >> n >> m;

    int arr[m];

    for (int i = 0; i < m; ++i)
    {
    	cin >> arr[i];
    }

    int mini = 0, maxi = 0, minin = n, maxin = n;

    // mini ka kaam
    sort(arr, arr + m);
    for (int i = 0; i < m; ++i)
    {
    	for (int j = arr[i]; j >= 1; j--)
    	{
    		if (minin)
    		{
	    		mini += j;
	    		minin--;    			
    		}
    	}
    }

    // maxi ka kaam
    reverse(arr, arr + m);
    int i = 0;
    while (maxin)
    {
    	maxi += arr[i];
    	maxin--;
    	arr[i]--;
    	if (i != m - 1 && arr[i] < arr[i + 1]) i++;
    	else if (i != 0 && arr[i] == arr[i - 1]) i = 0;
	    // for (int i = 0; i < m; ++i)
	    // {
	    // 	cout << arr[i] << ' ';
	    // }
	    // cout << maxi << "\n";
	    // cout << "\n";
    }


    if (m == 1) maxi = mini;
    cout << maxi << " " << mini << "\n";
    return 0;
}