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

        map<int, int> mp;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		mp[arr[i]]++;
    	}

    	int maxiCnt = 0;
    	for (auto x : mp)
    	{
    		maxiCnt = max(maxiCnt, x.S);
    	}

    	int moves = 0;
    	while (n - maxiCnt > 0)
    	{
    		moves++;
    		moves += min(maxiCnt, n - maxiCnt);
    		maxiCnt *= 2;
    	}

    	cout << moves << "\n";
    }
    return 0;
}