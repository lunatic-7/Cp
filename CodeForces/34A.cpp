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

    int mini = INT_MAX, chk = 0;
    for (int i = 0; i < n; ++i)
    {
    	if (i == n - 1)
    	{
    		if (abs(arr[i] - arr[0]) < mini)
    	    {
    			chk = i + 1;
    			mini = abs(arr[i] - arr[0]);
    		}
    	}
    	else if (abs(arr[i] - arr[i + 1]) < mini)
    	{
    		chk = i + 1;
    		mini = abs(arr[i] - arr[i + 1]);
    	}
    }

    if (chk == n) cout << chk << " " << 1 << "\n";
    else cout << chk << " " << chk + 1 << "\n";
    return 0;
}