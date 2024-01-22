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

    int maxi = arr[0], mini = arr[0], pts = 0;

    for (int i = 1; i < n; ++i)
    {
    	if (arr[i] > maxi)
    	{
    		maxi = arr[i];
    		pts++;
    	}
    	else if (arr[i] < mini)
    	{
    		mini = arr[i];
    		pts++;
    	}
    }

    cout << pts << "\n";
    return 0;
}