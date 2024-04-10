#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

map<int,int> solve(vector<int> &arr)
{
	map<int, int> temp;
	int ct = 1;
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] == arr[i + 1] && i < arr.size() - 1)
		{
			ct++;
		}
		else
		{
			if (temp[arr[i]] < ct) temp[arr[i]] = ct;
			ct = 1;
		}
	}

	return temp;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	vector<int> a(n), b(n);

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> b[i];
    	}

    	map<int, int> store1, store2;
    	store1 = solve(a);
    	store2 = solve(b);

    	int maxi = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		maxi = max(maxi, store1[a[i]] + store2[a[i]]);
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		maxi = max(maxi, store1[b[i]] + store2[b[i]]);
    	}    	

    	cout << maxi << "\n";
    }
    return 0;
}