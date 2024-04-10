#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// WRONG ANS -- Don't know why!
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.F == b.F)
    {
        return a.F < b.F;
    }
    return a.F > b.F;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, k;
    	cin >> n >> k;

    	int arr[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if (arr[i] > k) arr[i] %= k;
    	}

    	vector<pair<int, int>> vp;
    	for (int i = 0; i < n; ++i)
    	{
    		vp.PB({arr[i], i + 1});	
    	}

    	sort(vp.begin(), vp.end(), cmp);

        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << "\n";
        }

    	for (auto x : vp)
    	{
    		cout << x.S << " ";
    	}
    	cout << "\n";
    }
    return 0;
}