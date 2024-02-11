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

    	ll chk = 0, moves = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (arr[i] != 0 && chk == 0) chk = 1;
    		if (chk == 1 && (i != n - 1))
    		{
    			if (arr[i] == 0) moves++;
    			else moves += arr[i];
    		}
    	}

    	cout << moves << "\n";
    }
    return 0;
}