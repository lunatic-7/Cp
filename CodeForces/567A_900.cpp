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
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    int mini = INT_MAX;
    int maxi = INT_MIN;

   	sort(arr, arr + n);

   	for (int i = 0; i < n; ++i)
   	{
   		if (i == 0) 
   		{
   			mini = abs(arr[i] - arr[i + 1]);
   			maxi = abs(arr[i] - arr[n - 1]);
   		}
   		else if (i == n - 1)
   		{
   			mini = abs(arr[i] - arr[i - 1]);
   			maxi = abs(arr[i] - arr[0]);
   		}
   		else 
   		{
   			mini = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
   			maxi = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
   		}

   		cout << mini << " " << maxi << "\n";
   	}
    return 0;
}