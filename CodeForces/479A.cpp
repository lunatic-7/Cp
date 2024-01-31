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
    int arr[3];

    for (int i = 0; i < 3; ++i)
    {
    	cin >> arr[i];
    }

    for (int i = 0; i < 3; ++i)
    {
    	if (arr[i] == 1 && i == 0)
    	{
    		arr[1] += arr[i];
    	}
    	if (arr[i] == 1 && i == 1)
    	{
    		if (arr[0] > arr[2]) arr[2] += arr[i];
    		else arr[0] += arr[i];
    	}
    	if (arr[i] == 1 && i == 2)
    	{
    		arr[1] += arr[i];
    	}
    }

    int ans = 1;
    for (int i = 0; i < 3; ++i)
    {
    	ans *= arr[i];
    }

    cout << ans << "\n";
    return 0;
}