#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

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

    	vector<int> arr(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	int k = INT_MAX;
    	vector<int> ind;

    	for (int i = 0; i < n; ++i)
    	{
    		if (arr[i] < k && ind.size() < 2)
    		{
    			k = arr[i];
    			if (ind.size() > 0) ind.POB();
    			ind.PB(i + 1);
    		}
    		else if (arr[i] > k && ind.size() < 3)
    		{
    			k = arr[i];
    			if (ind.size() > 1) ind.POB();
    			ind.PB(i + 1);
    		}
    		else if (arr[i] < k && ind.size() < 4)
    		{
    			if (ind.size() > 2) ind.POB();
    			ind.PB(i + 1);
    			break;
    		}
    	}

    	bool chk = 0;
    	if (ind.size() == 3) chk = 1;

    	if (chk)
    	{
    		cout << "YES" << "\n";
    		for (auto &x : ind)
    		{
    			cout << x << " ";
    		}
    		cout << "\n";
    	}
    	else cout << "NO" << "\n";
    }
    return 0;
}